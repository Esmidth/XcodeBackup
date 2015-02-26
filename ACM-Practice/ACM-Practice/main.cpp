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
    while (1)
    {
        scanf("%d",&a);
        if( a ==0 )
            break;
        printf("%d\n",-a);
    }
    return 0;
}