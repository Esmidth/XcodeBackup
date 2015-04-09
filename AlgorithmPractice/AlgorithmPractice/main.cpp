//
//  main.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 2/26/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    int temp;
    int num[10];
    int i = 0;
    while (scanf("%d",&temp)) {
        num[i] = temp;
        i++;
    }
    printf("\n");
    for (int ii = i-1;ii>=0 ; ii--) {
        printf("%d ",num[ii]);
    }
    printf("\n");
    for (int ii = i-1; ii>=0; ii--) {
        printf("%d",num[ii]);
    }
    printf("\n");
    printf("%d",i);
    
}