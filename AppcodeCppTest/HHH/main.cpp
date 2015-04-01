//
//  main.cpp
//  HHH
//
//  Created by Steven Chang on 3/24/15.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#include <stdio.h>

void factorial(int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    factorial(n);
    return 0;
}

void factorial(int n)
{
    if (1 <= n && n <= 8) {
        printf("%d %d %d\n",n-1,n-1,n-1);
        printf("%d   %d\n",n,n);
        printf("%d %d %d\n",n+1,n+1,n+1);
    }
}