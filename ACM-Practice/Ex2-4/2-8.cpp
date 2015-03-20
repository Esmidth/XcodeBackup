//
//  main.cpp
//  Ex2-4
//
//  Created by Steven Chang on 2/28/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <time.h>


int factorial(int);

const int MOD = 1000000;

int main()
{
    int n,S = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        S = (S + factorial(i))%MOD;
    }
    printf("%d\n",S);
    return 0;
}

int factorial(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s = (s * i % MOD);
    }
    return s;
}