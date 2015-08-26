//
//  v2.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 8/25/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int nthUglyNumber(int n)
{
    if (n == 1) {
        return 1;
    }
    int del[1000000] = {'\0'};
    //int times[3] = {2,3,5};
    del[0] = 4;
    del[1] = 1;
    del[2] = 1;
    del[3] = 1;
    del[5] = 1;
    while (del[0] < n) {
        int cc = 0;
        int count = 0;
        for (int j = 1; count != del[0]; j++) {
            if (del[j] == 1) {
                count++;
                if (del[j*2] == 0) {
                    del[j*2] = 1;
                    cc++;
                }
                if (del[j*3] == 0) {
                    del[j*3] = 1;
                    cc++;
                }
                if (del[j*5] == 0) {
                    del[j*5] = 1;
                    cc++;
                }
            }
        }
        del[0] += cc;
    }
    int i;
    int counnnt = 0;
    for (i = 1; counnnt < n; i++) {
        if (del[i] == 1) {
            counnnt++;
        }
    }
    return i-1;
}
int main()
{
    cout << nthUglyNumber(429);
}

