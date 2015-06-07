//
//  G.cpp
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
    cin >>ti;
    int a[ti];
    int b[ti];
    bool op[ti];
    int sum = 0;
    for (int i = 0;i < ti; i++) {
        cin >> a[i];
        cin >> b[i];
        op[i] = 0;
    }
    for (int i = 0; i < ti; i++) {
        for (int j = 0; j < ti; j++) {
            if (j != i) {
                if ((b[i] == a[j]) && op[j] == 0) {
                    sum++;
                    op[j] = 1;
                }
            }
        }
    }
    cout << ti-sum << endl;

}