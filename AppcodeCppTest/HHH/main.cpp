//
//  main.cpp
//  HHH
//
//  Created by Steven Chang on 3/24/15.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#include <stdio.h>

int main() {
    int a;
    while(scanf("%d",&a) && a <= 8 && a >=1){
        printf("%d %d %d\n%d   %d\n%d %d %d\n",a-1,a-1,a-1,a,a,a+1,a+1,a+1);
    }
}
