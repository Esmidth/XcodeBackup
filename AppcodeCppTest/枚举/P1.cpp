//
//  P1.cpp
//  AppcodeCppTest
//
//  Created by Steven Chang on 3/16/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

double operatn(double t) {
    t = t * 5 / 4;
    t = t + 1;
    return t;
}

int main() {
    using namespace std;
    double tt = 1.0;
    double t;
    while (true) {
        int ii = 0;
        t = tt;
        for (int i = 0; i < 5; i++) {
            t = operatn(t);
            if ((int) t == t) {
                ii++;
            }
        }
        if (5 == ii) {
            break;
        }
        else
            tt = tt + 1;
    }
    cout << "总数: " << t << endl;
    cout << "剩余: " << tt << endl;
    return 0;
}