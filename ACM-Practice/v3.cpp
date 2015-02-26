//
//  v3.cpp
//  1699
//
//  Created by Steven Chang on 2/23/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i,i1,T,temp;
    scanf("%d",&T);
    int a[20][100]={'\0'};
    int a1[20]={'\0'};
    for (i = 0; i < T; i++) {
        scanf("%d",&a1[i]);
        for (i1 = 0; i1 < a1[i]; i1++) {
            scanf("%d",&a[i][i1]);
        }
    }
    for (i = 0; i < T; i++) {
        for (i1 = 0; i1 < a1[i]-1; i1++) {
            if ((a[i][i1] > a[i][i1+1])) {
                temp = a[i][i1];
                a[i][i1] = a[i][i1+1];
                a[i][i1+1] = temp;
                i1 = 0;
            }
        }
    }
    for (i = 0; i < T; i++) {
        printf("Case #%d:",i+1);
        for (i1 = 0; i1 < a1[i]; i1++) {
            printf(" %d",a[i][i1]);
        }
        printf("\n");
    }
    return 0;
}