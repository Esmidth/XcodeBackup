//
//  main.cpp
//  leetcode-count-primes #204
//
//  Created by Steven Chang on 4/27/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int countPrimes(int);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",countPrimes(n));
    
}

int countPrimes(int n){
    int sum = 0;
    int t = 0;
    for (int i = 2; i < n; i++) {
        for (int j = 1;j <= i; j++) {
            if ((i%j) == 0) {
                t++;
            }
        }
        if (t <= 2) {
            sum++;
            printf("%d ",i);
        }
        t = 0;
    }
    return sum;
}