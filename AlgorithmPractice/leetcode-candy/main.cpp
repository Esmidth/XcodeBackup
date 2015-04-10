//
//  main.cpp
//  leetcode-candy
//
//  Created by Steven Chang on 4/10/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int candy(int*,int);

int main()
{
    int n = 5;
    int ratings[5] = {1,2,3,4,2};
    printf("\n%d",candy(ratings,n));
}

int candy(int* ratings,int n)
{
    int sum = 0;
    int candies[n];
    for (int i = 0; i < n; i++) {
        candies[i] = 1;
    }
    for (int i = 1; i < n; i++) {
        if (ratings[i] > ratings[i-1]) {
            if (candies[i] > candies[i-1]) {
                continue;
            }
            else candies[i] = candies[i-1] + 1;
        }
    }
    for (int i = n-2; i >= 0; i--) {
        if (ratings[i] > ratings[i+1]) {
            if (candies[i] > candies[i+1]) {
                continue;
            }
            else candies[i] = candies[i+1]+1;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ",candies[i]);
        sum += candies[i];
    }
    return sum;
}