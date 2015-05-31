//
//  main.cpp
//  ACM_College_AC_3_5.31
//
//  Created by Steven Chang on 5/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ti;
    scanf("%d",&ti);
    int inn[ti];
    for (int i = 0; i < ti; i++) {
        scanf("%d",&inn[i]);
    }
    int sum = 0;
    for (int i = 0; i < ti-1; i++) {
        for (int j = i+1; j <= ti-1; j++) {
            if (inn[i] > inn[j]) {
                sum++;
            }
        }
    }
    printf("%d",sum);
}
