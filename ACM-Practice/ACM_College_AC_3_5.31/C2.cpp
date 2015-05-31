//
//  C2.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

long long pow(long long a,long long b)
{
    long long temp = a;
    for (long long i = 0; i < b; i++) {
        a = temp * a;
    }
    return a;
}
int main()
{
    using namespace std;
    long long a,b;
    cin >> a >> b;
    cout << (pow(a, b) - pow(b, a));
    
}