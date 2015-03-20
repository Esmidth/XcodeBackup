//
//  main.cpp
//  AppcodeCppTest
//
//  Created by Steven Chang on 2/22/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include "iostream"

using namespace std;

void o1(){cout << "HelloWorld\n";}
void on2(int n);
void onlogn(int);
void on3(int);
void o3n(int);

int main()
{
    int n;
    cin >>n;
    on2(n);
    cout << "-----------------------\n";
    onlogn(n);
    cout << "-----------------------\n";
    on3(n);
    cout << "-----------------------\n";
    o3n(n);
    cout << "-----------------------\n";
    return 0;
}

void on2(int n)
{
    for(int i = 0; i < n;i++ )
    {
        for(int i1 = 0;i1 < n;i1++)
            o1();
    }
}

void onlogn(int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; j = j * 2) {
            o1();
        }
    }
}

void on3(int n)
{
    for(int i = 0;i < n;i++)
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; ++k) {
                o1();
            }
        }
}

void o3n(int n)
{
    if(n == 1)
    {
        o1();
    }
    else {
        o3n(n - 1);
        o3n(n - 1);
        o3n(n - 1);
    }
}

