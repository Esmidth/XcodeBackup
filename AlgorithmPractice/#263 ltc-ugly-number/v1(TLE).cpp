//
//  main.cpp
//  #263 ltc-ugly-number
//
//  Created by Steven Chang on 8/24/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//
/*
 Write a program to check whether a given number is an ugly number.
 
 Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.
 
 Note that 1 is typically treated as an ugly number.
 */

#include <iostream>
#include <queue>
#include <vector>
#include <ctime>


bool isUgly(int);

int main()
{
    
    std::cout << isUgly(2123366400);
}


bool isUgly(int num)
{
    if (num == 0) {
        return false;
    }
    if (num == 1) {
        return true;
    }
    std::queue<int> numm;
    numm.push(num);
    while (numm.size() != 0 && numm.front() != 1) {
        if ((numm.front() % 2) == 0) {
            numm.push(numm.front() / 2);
        }
        if (numm.front() % 3 == 0) {
            numm.push(numm.front()/3);
        }
        if (numm.front() % 5 == 0) {
            numm.push(numm.front() / 5);
        }
        numm.pop();
    }
    if (numm.size() == 0) {
        return false;
    }
    else
        return true;
}