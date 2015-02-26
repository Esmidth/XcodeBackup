//
//  main.cpp
//  HelloWorld
//
//  Created by Steven Chang on 2/22/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

void helloworld();

int main()
{
    using namespace std;
    cout << "Hello World" <<endl;
    helloworld();
    return 0;
}

void helloworld()
{
    std::cout << "Hello World" <<std::endl;
}