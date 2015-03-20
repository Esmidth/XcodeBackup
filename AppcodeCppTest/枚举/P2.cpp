//
//  main.cpp
//  枚举
//
//  Created by Steven Chang on 3/14/15.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    char a[200] = {"123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100"};
    char b[100] = {'\0'};
    scanf("%s",b);
    unsigned long len = strlen(b);
    unsigned long len1  = strlen(a);
    int trrr;
    int ii;
    for (int i = 0; i < len1; i++) {
        trrr = true;
        for (ii = 0; ii < len; ii++) {
            //printf("a:%c,b:%c\n",*(a+i+ii),*(b+ii));
            if (*(a+i+ii) != *(b+ii)) {
                trrr = false;
                break;
            }
        }
        if(trrr == true)
            cout <<"Position:"<<i+1<<endl;
        
    }
    return 0;
}
