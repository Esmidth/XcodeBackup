//
//  4.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 6/23/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <fstream>


using namespace std;

int main(){
    int a[100000];
    int b[20];
    ifstream in("statistics.txt");
    for (int i = 0; i < 100000; i++) {
        in >> a[i];
    }
    for (int i = 0; i < 20; i++) {
        int max = a[0];
        int pos = 0;
        for (int j = 1; j < 100000; j++) {
            if (a[j] > max) {
                max = a[j];
                pos = j;
            }
        }
        b[i] = max;
        a[pos] = -9999999;
    }
    for (int i = 0; i < 11; i++) {
        cout << b[i+9] << endl;
    }
}