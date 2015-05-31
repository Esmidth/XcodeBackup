#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;
int main()
{
    char s[1010];
    memset(s,0,sizeof(s));
    while(gets(s))
    {
        int len=strlen(s),count(-1);
        int str[500];
        memset(str,0,sizeof(str));
        for(int i=0; i<len; i++)
        {
            if(s[i]=='<')
            {
                if(s[i+1]=='U')
                {
                    str[++count]=1;
                    i+=3;
                }
                else if(s[i+1]=='D')
                {
                    str[++count]=2;
                    i+=5;
                }
                else if(s[i+2]=='U')
                {
                    str[count--]=0;
                    i+=4;
                }
                else if(s[i+2]=='D')
                {
                    str[count--]=0;
                    i+=6;
                }
            }
            else if(str[count]==1) printf("%c",toupper(s[i]));
            else if(str[count]==2) printf("%c",tolower(s[i]));
            else printf("%c",s[i]);
        }
        printf("\n");
        memset(s,0,sizeof(s));
    }
    return 0;
}