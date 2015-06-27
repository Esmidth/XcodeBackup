//
//  main.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 2/26/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
    int count=0,choice,a,b;
    char ch,name[20],password[16];
    printf("******************\n");
    printf("***   welcome  ***\n");
    printf("***LOGIN PLEASE***\n");
    printf("******************\n");
    
    while (1)
    {
        printf("Please input your name:\n");
        scanf("%s",name);
        printf("Please input your password:\n");
        scanf("%s",password);
        if(strcmp(name,"student")==0 && strcmp(password,"student")==0)
        {
            printf("welcome to 10086!\n");
            break;
        }
        count++;
        if (count == 3) {
            return 1;
        }
        
    }
    while (1)
    {
        printf("welcome to 10086!\n");
        printf("1----------²éÑ¯Óà¶î!\n");
        printf("2----------³äÖµ!\n");
        printf("3----------ÍË³öÏµÍ³!\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Óà¶îÊÇ:%d\n",a);break;
            case 2:printf("ÇëÊäÈë³äÖµ½ð¶î£º\n");scanf("%d",&b);a=a+b;break;
            case 3:break;
        }
    }
    return 0;
    
}
