//
//  E.cpp
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
    int as = 0;
    int bs = 0;
    int af = 0;
    int bf = 0;
    int temp;
    int temp1;
    int temp2;
    for (int i = 0; i < ti; i++) {
        cin >> temp >> temp1 >> temp2;
        if (temp == 1) {
            as += temp1;
            af += temp2;
        }
        else{
            bs += temp1;
            bf += temp2;
        }
    }
    if (as >= af) {
        cout << "LIVE" << endl;
    }
    else
        cout << "DEAD" << endl;
    if (bs >= bf) {
        cout  << "LIVE" << endl;
    }
    else
        cout << "DEAD" << endl;
}
