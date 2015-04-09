//
//  main.cpp
//  Al V5
//
//  Created by Steven Chang on 4/2/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

void matrixChain(int[] p,int [][]m,int [][]s)
{
    int n = sizeof(p) - 1;
    for (int i = 0; i <= n; i++) {
        m[i][i] = 0;
    }
    for (int r = 2; r <= n; r++) {
        for (int i = 1; i <= n-r+1; i++) {
            int j = i+r-1;
            m[i][j] = m[i+1][j] + p[i-1]*p[i]*p[j];
            s[i][j] = 1;
        }
        for (int k = i+1; k < j; k++) {
            int t = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
            if (t < m[i][j]) {
                m[i][j] = t;
                s[i][j] = k;
            }
        }
    }
}