//
//  main.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 2/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a;
    while (scanf("%d",&a) && a != 0)
    {
        printf("%d\n",-a);
    }
    return 0;
}