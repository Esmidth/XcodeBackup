//
//  2-10.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 2/28/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#define LOCAL
#include <stdio.h>
#define INF 10000000
int main()
{
#ifdef LOCAL
    freopen("data.in","r",stdin);
    freopen("data.out", "w", stdout);
#endif
    int x,n = 0,min = INF,max = -INF,s=0;
    while (scanf("%d",&x)) {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    printf("%d %d %.3f\n",min,max,(double)s/n);
    return 0;
}