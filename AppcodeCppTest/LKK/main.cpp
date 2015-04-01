//
//  main.cpp
//  LKK
//
//  Created by Steven Chang on 3/17/15.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void fun(unsigned long n,unsigned long *temp){
    if (n < 2) {
        *temp = n;
    }
    else{
        *(temp) = n % 2;
        fun(n/2,temp+1);
    }
};
unsigned long pow(int b)
{
    if (0 == b) {
        return 1;
    }
    unsigned long a = 2;
    for(int i = 0;i < b;i++)
    {
        a = a * 2;
    }
    return a;
}
unsigned long reverseBits(unsigned long n){
    unsigned long temp[32]={0};
    fun(n,temp);
    n = 0;
    for (int i = 0; i < 32; i++) {
        //cout << temp[i];
        //cout << i;
        unsigned long tempp = pow(i);
        cout << tempp << " ";
        n += tempp * temp[31-i];
        //cout << n << "  ";
    }
    return n;
};
int main()
{
    long n = 43261596;
    n = reverseBits(n);
    cout << n;
}