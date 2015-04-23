//
//  v2.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 4/20/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    char temp;
    while (1) {
        scanf("%c",&temp);
        if (((temp >= 'a') && (temp <= 'z')) || ((temp >= 'A') && (temp <= 'Z'))) {
            temp += 3;
            if (((temp > 'z')&& (temp <= 'z'+ 3)) || ((temp >='Z' + 3) && (temp > 'Z'))) {
                temp -= 26;
            }
            //printf("%d",temp);
        }
        printf("%c",temp);
    }
}