//
//  main.cpp
//  1699
//
//  Created by Steven Chang on 2/22/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        int n1;
        scanf("%d",&n1);
        int a[n1];
        int i1;
        int temp;
        for (i1 = 0; i1 < n1; i1++) {
            scanf("%d",&a[i1]);
        }
        for (i1 = 0; i1 < n1-1; i1++){
            if ((a[i1] > a[i1+1])) {
                temp = a[i1];
                a[i1] = a[i1+1];
                a[i1+1] = temp;
                i1 = i1-1;
            }
        }
        printf("Case #%d:",i+1);
        for (i1 = 0; i1 < n1; i1++) {
            printf(" %d",a[i1]);
        }
        printf("\n");
    }
    return 0;
}