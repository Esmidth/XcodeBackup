//
//  v3.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 8/26/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>


using namespace std;


struct node{
    int * r;
    int len;
};
node merge(node r1,node r2,node r3)
{
    node aa;
    int * a = new int[r1.len+r2.len+r3.len];
    int pos1,pos2,pos3 = 0;
    for (int i = 0; i < r1.len+r2.len+r3.len; i++) {
        {/*
        if (r1.r[pos1] < r2.r[pos2]) {
           
            if (r1.r[pos1] < r3.r[pos3]) {
                a[i] = r1.r[pos1];
                pos1++;
            }
            else if (r1.r[pos1] > r3.r[pos3]) {
                a[i] = r3.r[pos3];
                pos3++;
            }
            else if(r1.r[pos1] == r3.r[pos3])
            {
                a[i]  = r1.r[pos1];
                pos1++;
                pos3++;
            }
        }
        else if(r1.r[pos1] > r2.r[pos2])
        {
            if (r2.r[pos2] < r3.r[pos3]) {
                a[i] = r2.r[pos2];
                pos2++;
            }
            else if(r2.r[pos2] > r3.r[pos3])
            {
                a[i] = r3.r[pos3];
                pos3++;
            }
            else if(r2.r[pos2] == r3.r[pos3])
            {
                a[i] = r3.r[pos3];
                pos3++;
                pos2++;
            }
        }
        else if(r2.r[pos2] == r1.r[pos1])
        {
            if (r1.r[pos1] > r3.r[pos3]) {
                a[i] = r3.r[pos3];
                pos3++;
            }
            else if (r1.r[pos1] < r3.r[pos3])
            {
                a[i] = r1.r[pos1];
                pos1++;
                pos2++;
            }
            else if(r1.r[pos1] == r3.r[pos3])
            {
                a[i] = r1.r[pos1];
                pos1++;
                pos2++;
                pos3++;
            }
        }
             */}
            
    }
    aa.r = a;
    return aa;
}
int nthUglyNumber(int n)
{
    return 1;
    
}

int main()
{
    cout << nthUglyNumber(10) << endl;
    cout << nthUglyNumber(429) << endl;
    cout << nthUglyNumber(1) << endl;
    node a1,a2,a3;
    a1.r = {1,2,3};
    a1.len = 3;
}