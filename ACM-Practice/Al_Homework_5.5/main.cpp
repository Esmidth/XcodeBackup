//
//  main.cpp
//  Al_Homework_5.5
//
//  Created by Steven Chang on 5/14/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

using namespace std;

int greedy(int *length,int n,int k,int ti)
{
    if (ti == k) {
        return 1;
    }
    if (length[ti] > n) {
        return 0;
    }
    int total = 0;
    int sum = 0;
    for (; (sum+length[ti]) <= n; ti++) {
        sum += length[ti];
    }
    total++;
    int temp = total;
    total += greedy(length, n, k,ti);
    if (temp == total) {
        return 0;
    }
    return total;
}
int main(int argc, const char * argv[]) {
    int n,k;
    cin >> n >> k;
    int length[k+1];
    for (int i = 0; i < k+1; i++) {
        cin >> length[i];
    }
    int sum = greedy(length, n, k, 0);
    if (sum == 0) {
        cout << "No Solution" << endl;
    }
    else
        cout << sum-1;
    return 0;
}
