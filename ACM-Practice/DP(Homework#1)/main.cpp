//
//  main.cpp
//  DP(Homework#1)
//
//  Created by Steven Chang on 4/5/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n][n];
    for (int i = n-1; i >= 0; i--) {
        int ii = 0;
        for (int j = i; j < n; j++) {
            cin >> p[ii][j];
            ii++;
        }
    }
    /*
    for (int i = n-1; i >= 0; i--) {
        int ii = 0;
        for (int j = i; j < n; j++) {
            cout << "(" << p[ii][j] << ") ";
            ii++;
        }
        cout << endl;
    }
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (p[j][j+i] < p[j+1][j+i+1]) {
                p[j][j+i+1] = p[j][j+i+1]+p[j][j+i];
            }
            else{
                p[j][j+i+1] += p[j+1][j+i+1];
            }
        }
    }
    /*
    for (int i = n-1; i >= 0; i--) {
        int ii = 0;
        for (int j = i; j < n; j++) {
            cout << "(" << p[ii][j] << ") ";
            ii++;
        }
        cout << endl;
    }
    */
    cout << p[0][n-1] << endl;
    
}
