//
//  TCPUART.c
//  
//
//  Created by Steven Chang on 12/7/14.
//
//

#include "TCPUART.h"
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <time.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>

#define BUFSIZE 512

typedef struct CLIENT {
    int fd;
    struct sockaddr_in addr;
}CLIENT;

/**serial init set*/
int set_opt(int fd,int nSpeed, int nBits, char nEvent, int nStop)
{
    struct termios newtio,oldtio;
    if  ( tcgetattr( fd,&oldtio)  !=  0)
    {
        perror("SetupSerial 1");
        return -1;
    }
    bzero( &newtio, sizeof( newtio ) );
    newtio.c_cflag  |=  CLOCAL | CREAD;
    newtio.c_cflag &= ~CSIZE;
    
    switch( nBits )
    {
        case 7:
            newtio.c_cflag |= CS7;
            break;
        case 8:
            newtio.c_cflag |= CS8;
            break;
    }
    
    switch( nEvent )
    {
        case 'O':                     //奇校验
            newtio.c_cflag |= PARENB;
            newtio.c_cflag |= PARODD;
            newtio.c_iflag |= (INPCK | ISTRIP);
            break;
        case 'E':                     //偶校验
            newtio.c_iflag |= (INPCK | ISTRIP);
            newtio.c_cflag |= PARENB;
            newtio.c_cflag &= ~PARODD;
            break;
        case 'N':                    //无校验
            newtio.c_cflag &= ~PARENB;
            break;
    }
    
    switch( nSpeed )
    {
        case 2400:
            cfsetispeed(&newtio, B2400);
            cfsetospeed(&newtio, B2400);
            break;
        case 4800:
            cfsetispeed(&newtio, B4800);
            cfsetospeed(&newtio, B4800);
            break;
        case 9600:
            cfsetispeed(&newtio, B9600);
            cfsetospeed(&newtio, B9600);
            break;
        case 115200:
            cfsetispeed(&newtio, B115200);
            cfsetospeed(&newtio, B115200);
            break;
        default:
            cfsetispeed(&newtio, B9600);
            cfsetospeed(&newtio, B9600);
            break;
    }
    if( nStop == 1 )
    {
        newtio.c_cflag &=  ~CSTOPB;
    }
    else if ( nStop == 2 )
    {
        newtio.c_cflag |=  CSTOPB;
    }
    newtio.c_cc[VTIME]  = 0;
    newtio.c_cc[VMIN] = 0;
    tcflush(fd,TCIFLUSH);
    if((tcsetattr(fd,TCSANOW,&newtio))!=0)
    {
        perror("com set error");
        return -1;
    }
    printf("set done!\n");
    return 0;
}

int open_port(int fd,int comport)
{
    
    if (comport==1)
    {    fd = open( "/dev/ttyS2", O_RDWR|O_NOCTTY|O_NDELAY);
        if (-1 == fd)
        {
            perror("Can't Open Serial Port");
            return(-1);
        }
        else
        {
            printf("open ttyS0 .....\n");
        }
    }
    else if(comport==2)
    {    fd = open( "/dev/ttyS1", O_RDWR|O_NOCTTY|O_NDELAY);
        if (-1 == fd)
        {
            perror("Can't Open Serial Port");
            return(-1);
        }
        else
        {
            printf("open ttyS1 .....\n");
        }
    }
    else if (comport==3)
    {
        fd = open( "/dev/ttyS2", O_RDWR|O_NOCTTY|O_NDELAY);
        if (-1 == fd)
        {
            perror("Can't Open Serial Port");
            return(-1);
        }
        else
        {
            printf("open ttyS2 .....\n");
        }
    }
    if(fcntl(fd, F_SETFL, 0)<0)
    {
        printf("fcntl failed!\n");
    }
    else
    {
        printf("fcntl=%d\n",fcntl(fd, F_SETFL,0));
    }
    //if(isatty(STDIN_FILENO)==0)
    if(isatty(fd)==0)
    {
        printf("standard input is not a terminal device\n");
    }
    else
    {
        printf("isatty success!\n");
    }
    printf("fd-open=%d\n",fd);
    return fd;
}

/**TCP_server*/
int main(int argc, char *argv[])
{
    int sockfd;
    int listenfd;
    int connectfd;
    
    int ret;
    int maxfd=-1;
    struct timeval tv;
    
    struct sockaddr_in server_addr;
    struct sockaddr_in client_addr;
    
    socklen_t len;
    int portnumber;
    
    char buf[BUFSIZE];
    
    int z,i,maxi = -1;
    
    int serial_fd = -1;
    int nread;
    
    fd_set rset,allset;
    
    CLIENT client[FD_SETSIZE];
    
    if(argc != 2)
    {
        fprintf(stderr,"Usage£º%s portnumber\a\n",argv[0]);
        exit(1);
    }
    
    if((portnumber = atoi(argv[1]))<0)
    {
        fprintf(stderr,"Usage£º%s portnumber\a\n",argv[0]);
        exit(1);
    }
    /** serial**********************/
    
    if((serial_fd=open_port(serial_fd,1))<0)
    {
        perror("open_port error");
        //return;
    }
    if((i=set_opt(serial_fd,115200,8,'N',1))<0)
    {
        perror("set_opt error");
        //return;
    }
    printf("serial_fd=%d\n",serial_fd);
    
    /*******************************/
    
    if((listenfd = socket(PF_INET, SOCK_STREAM, 0)) == -1)
    {
        fprintf(stderr, "Socket error: %s\a\n", strerror(errno));
        exit(1);
    }
    
    
    memset(&server_addr, 0, sizeof server_addr);
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    server_addr.sin_port = htons(portnumber);
    
    
    if((bind(listenfd, (struct sockaddr *)(&server_addr), sizeof server_addr)) == -1)
    {
        fprintf(stderr, "Bind error: %s\a\n", strerror(errno));
        exit(1);
    }
    
    if(listen(listenfd, 128) == -1)
    {
        fprintf(stderr, "Listen error: %s\a\n", strerror(errno));
        exit(1);
    }
    
    for(i=0;i<FD_SETSIZE;i++)
    {
        client[i].fd = -1;
    }
    
    FD_ZERO(&allset);
    FD_SET(listenfd, &allset);
    
    maxfd = listenfd;
    
    printf("waiting for the client's request...\n");
    
    while (1)
    {
        rset = allset;
        
        tv.tv_sec = 1;      //wait 1 second
        tv.tv_usec = 0;
        
        ret = select(maxfd + 1, &rset, NULL, NULL, &tv);
        
        if(ret == 0)
            continue;
        else if(ret < 0)
        {
            printf("select failed!");
            break;
        }
        else
        {
            if(FD_ISSET(listenfd,&rset)) // new connection
            {
                len = sizeof (struct sockaddr_in);
                if((connectfd = accept(listenfd,(struct sockaddr*)(&client_addr),&len)) == -1)
                {
                    printf("accept() error");
                    continue;
                }
                
                for(i=0;i<FD_SETSIZE;i++)
                {
                    if(client[i].fd < 0)
                    {
                        client[i].fd = connectfd;
                        client[i].addr = client_addr;
                        printf("Yout got a connection from %s\n",inet_ntoa(client[i].addr.sin_addr));
                        break;
                    }
                }
                
                if(i == FD_SETSIZE)
                    printf("Overfly connections");
                
                FD_SET(connectfd,&allset);
                
                if(connectfd > maxfd)
                    maxfd = connectfd;
                
                if(i > maxi)
                    maxi = i;
            }
            else
            {
                for(i=0;i<=maxi;i++)
                {
                    if((sockfd = client[i].fd)<0)
                        continue;
                    
                    if(FD_ISSET(sockfd,&rset))
                    {
                        bzero(buf,BUFSIZE + 1);
                        if((z = recv(sockfd,buf,BUFSIZE,0)) > 0)
                        {
                            buf[z] = '\0';
                            //printf("received data:%sfrom %s",buf,inet_ntoa(client[i].addr.sin_addr));
                            
                            if((nread=write(serial_fd,buf,strlen(buf)))>0)
                            {
                                buf[nread]='\0';
                                printf("nread=%d,Receievd Data:%s\n",nread,buf);
                            }
                            if(z < 0)
                                printf("write() ERROR");
                        }
                        else
                        {
                            printf("disconnected by client!");
                            close(sockfd);  
                            FD_CLR(sockfd,&allset);  
                            client[i].fd = -1;  
                        }  
                    }  
                }  
            }  
        }  
    }  
    close(listenfd);  
    return 0;  
}  
