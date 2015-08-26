//
//  v3.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 8/24/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <iostream>


bool isUgly(int num){
    if (num == 0) {
        return false;
    }
    if (num == 1) {
        return true;
    }
    
    while (num >= 2 && num % 2 == 0) {
        num /= 2;
    }
    while (num >= 3 && num % 3 == 0) {
        num /= 3;
    }
    while (num >= 5 && num % 5 == 0) {
        num /= 5;
    }
    
    return num == 1;
}
int main(){
    std::cout << isUgly(14);
}