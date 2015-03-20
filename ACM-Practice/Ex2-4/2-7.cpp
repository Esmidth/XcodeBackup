//
//  main.cpp
//  Ex2-4
//
//  Created by Steven Chang on 2/28/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int factorial(int);

int main()
{
    int n,S = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        S += factorial(i);
    }
    printf("%d\n",S % 1000000);
    return 0;
}

int factorial(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}