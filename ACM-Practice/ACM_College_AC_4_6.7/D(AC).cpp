//
//  D.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 6/7/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int ti;
    cin >> ti;
    double temp;
    for (int i = 0; i < ti; i++) {
        cin >> temp;
        temp = 180.0 - temp;
        if ((360.0/temp) != (int)(360.0/temp)) {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}