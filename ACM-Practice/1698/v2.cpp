//
//  main.cpp
//  1698
//
//  Created by Steven Chang on 2/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    int q;
    int k;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&k);
        for (q = 0; q < k; q++) {
            printf(" ");
        }
        printf("^");
        for (int m = 0; m < k-1; m++) {
            printf("\n");
            for (q = 1; q < k-m ; q++) {
                printf(" ");
            }
            printf("*");
            for (q = 0; q < m; q++) {
                printf(" ");
            }
            printf(" ");
            for (q = 0; q < m; q++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n<");
        for (q = 0; q<(k*2-1); q++) {
            printf(" ");
        }
        printf(">");
        for (int m =0; m < k-1; m++) {
            printf("\n");
            for (q = 0; q < m+1; q++) {
                printf(" ");
            }
            printf("*");
            for (q = 0; q < k-m-2; q++) {
                printf(" ");
            }
            printf(" ");
            for (q = 2; q < k-m; q++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
        for (q = 0 ; q < k; q++) {
            printf(" ");
        }
        printf("v\n");
    }
    return 0;
}

