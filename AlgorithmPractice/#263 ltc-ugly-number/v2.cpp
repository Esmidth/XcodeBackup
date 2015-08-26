//
//  v2.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 8/24/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <iostream>

bool isUgly(int num)
{
    if (num == 0) {
        return false;
    }
    if (num == 1) {
        return true;
    }
    int times = 1;
    int o5 = 5;
    while (o5 < num) {
        times += 1;
    }
    
}

int main(){
    
}