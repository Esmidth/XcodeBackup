//
//  main.cpp
//  Al_Homework_Search
//
//  Created by Steven Chang on 5/14/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include "algorithm"
#include <queue>
#include "cmath"

using namespace std;

bool *turn(bool *,int,int);
void printff(bool *t,int n)
{
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    bool start[n];
    bool end[n];
    for (int i = 0; i < n; i++) {
        start[i] = true;
        end[i] = false;
    }
    
    queue<bool *> Q;
    Q.push(start);
    int t = 0;
    while (Q.front() != end) {
        cout <<endl;
        bool temp[n];
        //memcpy(temp, Q.front(), n);
        for (int i = 0; i < n; i++) {
            
            printff(temp, n);
            Q.push(turn(temp, n, i));
        }
        //printff(turn(Q.front(), n, 1), n);
        //printff(Q.front(), 4);
        //printff(Q.front(),n);
        Q.pop();
        //printff(Q.front(), n);
        //t += n;
    }
    cout << t;
    /*
    for (int i = 0; i < n; i++) {
        cout << Q.front()[i] << " ";
    }
    Q.push(turn(start, 4, 1));
    printff(Q.front(), 4);
    Q.pop();
    printff(Q.front(), 4);
    
    for (int i = 0; i < n; i++) {
        cout << Q.front()[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << (Q.front()==end) << " ";
    }
    */
}

bool * turn(bool * n,int length,int pos)
{
    for (int i = 0; i < length; i++) {
        n[i] = !n[i];
    }
    n[pos] = ! n[pos];
    printff(n, length);
    return n;
}
