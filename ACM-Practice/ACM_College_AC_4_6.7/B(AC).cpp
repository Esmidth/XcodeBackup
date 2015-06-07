//
//  B.cpp
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
    int host[ti];
    int guest[ti];
    int sum = 0;
    for (int i = 0; i < ti; i++) {
        cin >> host[i];
        cin >> guest[i];
    }
    for (int i = 0; i < ti; i++) {
        for (int j = 0; j < ti; j++) {
            if(host[i] == guest[j])
            {
                sum++;
            }
        }
    }
    cout << sum << endl;
}