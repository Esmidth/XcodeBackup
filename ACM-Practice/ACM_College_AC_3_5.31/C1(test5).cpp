//
//  C1.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(){
    long long a,b;
    std::cin >> a >> b;
    std::cout <<(long long)std::pow(a, b)-(long long)std::pow(b, a);
}
