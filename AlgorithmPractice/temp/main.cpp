//
//  main.cpp
//  temp
//
//  Created by Steven Chang on 5/11/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    int r,m,n;
    scanf("%d%d",&m,&n);
    if (m < n) {
        r = m;
        m = n;
        n = r;
    }
    r = m % n;
    while (r != 0) {
        m = n;
        n = r;
        r = m % n;
    }
    printf("%d\n",n);
    return 0;
}