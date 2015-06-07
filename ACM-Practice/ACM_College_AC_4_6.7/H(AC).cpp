//
//  H.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 6/7/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int n,t;
    cin >> n >> t;
    char queue[n];
    for (int i = 0; i < n; i++) {
        cin >> queue[i];
    }
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n-1; j++) {
            if (queue[j] == 'B' && queue[j+1] == 'G') {
                queue[j] = 'G';
                queue[j+1] = 'B';
                j++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << queue[i];
    }
    cout << endl;
}