//
//  main.cpp
//  Error
//
//  Created by Steven Chang on 1/30/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

double hmean(double a,double b);

int main()
{
    double x,y,z;
    cout << "Enter two numbers: ";
    
    while (cin>>x>>y) {
        z = hmean(x, y);
        cout << "Harmonic mean of "<< x << " and " << y <<" is " << z << endl;
        cout << "Enter next set of number <q to quit>\n";
    }
    
    cout << "Bye!\n";
    return 0;
}

double hmean(double a,double b)
{
    if ( a == -b)
    {
        cout << "Untenable arguments to hmean()\n";
        std::abort();
    }
    return 2.0 * a * b / (a+b);
}