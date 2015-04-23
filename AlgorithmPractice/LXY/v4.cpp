//
//  v4.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 4/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main(){
    int a,b;
    int cr = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i = a;i < b; i++) {
        int ti = 0;
        for (int j = 1; j <= i; j++) {
            if ((i % j) == 0) {
                ti++;
            }
        }
        if (ti == 2) {
            printf("%4d ",i);
            cr++;
            if (cr == 6) {
                cr = 0;
                printf("\n");
            }
        }
    }
}