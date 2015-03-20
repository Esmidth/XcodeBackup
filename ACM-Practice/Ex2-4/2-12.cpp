//
//  2-12.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 2/28/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x,n=0;
    while (scanf("%d",&x) && x != 0) {
        n += 1;
        int s = 0;
        int temp;
        scanf("%d",&temp);
        s += temp;
        int min = temp,max = temp;
        for (int i = 1; i < x; i++) {
            scanf("%d",&temp);
            s += temp;
            if (temp > max)
                max = temp;
            if (temp < min)
                min = temp;
        }
        printf("Case %d: ",n);
        printf("%d %d %.3f\n",min,max,(double)s/x);
    }
    return 0;
}