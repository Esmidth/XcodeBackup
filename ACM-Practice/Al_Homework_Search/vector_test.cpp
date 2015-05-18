//
//  vector_test.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/16/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int ti;
    cin >> ti;
    vector<bool> Q;
    for (int i = 0; i < ti; i++) {
        Q.push_back(1);
    }
    for (int i = 0; i < Q.size(); i++) {
        Q[i] = !Q[i];
    }
    for (int i = 0; i < Q.size(); i++) {
        cout << Q[i] << endl;
    }
}