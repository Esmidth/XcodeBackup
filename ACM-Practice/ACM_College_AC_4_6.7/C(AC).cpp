//
//  C.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 6/7/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int maxx[5][5];
    int x = 0,y = 0;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> maxx[i][j];
            if (maxx[i][j] == 1) {
                y = i;
                x = j;
            }
        }
    }
    if (x > 2) {
        sum += (x-2);
    }
    else
        sum += (2-x);
    if (y > 2) {
        sum += (y-2);
    }
    else
        sum += (2-y);
    cout << sum <<  endl;
}