//
//  main.cpp
//  leetcode-happy_number #202
//
//  Created by Steven Chang on 5/2/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <math.h>

bool isHappy(int);
int t2s(int);

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    printf("%d", isHappy(n));
    return 0;
}

bool isHappy(int n)
{
    int ti = 0;
    while(true)
    {
        n = t2s(n);
        if(n == t2s(n))
        {
            if(n == 1)
            {
                return true;
            }
            else
                return false;
        }
        if(ti == 100)
        {
            return false;
        }
        ti++;
    }
}

int t2s(int in)
{
    int sum = 0;
    int length = 1;
    int temp = in;
    while (temp / 10 != 0)
    {
        temp = temp / 10;
        length++;
    }
    for (int i = 0; i < length; ++i) {
        temp = in % 10;
        in = in / 10;
        sum += pow(temp,2);
    }
    return sum;
}