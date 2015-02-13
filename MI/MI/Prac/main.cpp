//
//  main.cpp
//  Prac
//
//  Created by Steven Chang on 1/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>
#include "winec.h"

using namespace std;

int main()
{
    cout << "Enter name of wine: ";
    string lab;
    cin >> lab;
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;
    
    Wine holding(lab,yrs);
    holding.GetBottles();
    holding.Show();
    
    const int YRS = 3;
    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    cout << "Total bottles for " << more.Label() << ": " << more.sum() <<endl;
    cout << "Bye\n";
    
    return 0;
}