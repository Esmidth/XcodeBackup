//
//  main.cpp
//  Over_and_over(Homework#1)
//
//  Created by Steven Chang on 4/6/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

using namespace std;

int* func(int*,int);

int main()
{
    int sum[100];
    int t;
    cin >> t;
    int* n = func(sum,t);
    int s = 0;
    for (int i = 0; i < t; i++) {
        s += *(n+i);
    }
    cout << s << endl;
}

int* func(int s[],int t)
{
    if (t == 1) {
        s[0] = 1;
        return s;
    }
    s = func(s, t-1);
    for (int i = t - 1; i >= 0; i--) {
        s[i+1] = s[i]+ s[i+1] * (i+2);
    }
    return s;
}