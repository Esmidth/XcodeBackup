//
//  F.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 6/7/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//


#include <iostream>
#include <stdio.h>
int main()
{
    using namespace  std;
    int n,m,k;
    //cin >> n >> m >> k;
    scanf("%d%d%d",&n,&m,&k);
    int maxx[n][m];
    int x[n];
    int y[m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            //cin >> maxx[i][j];
            scanf("%d",&maxx[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        x[i] = i;
    }
    for (int i = 0; i < m; i++) {
        y[i] = i;
    }
    char t1;
    int t2;
    int t3;
    int temp;
    for (int zx = 0; zx < k; zx++) {
        //cin >> t1 >> t2 >> t3;
        scanf("%s%d%d",&t1,&t2,&t3);
        t2 -= 1;
        t3 -= 1;
        switch (t1) {
            case 'r':
                temp = x[t2];
                x[t2] = x[t3];
                x[t3] = temp;
                break;
            case 'c':
                temp = y[t2];
                y[t2] = y[t3];
                y[t3] = temp;
                break;
            case 'g':{
                //cout << maxx[t2][t3] << endl;
                printf("%d\n",maxx[x[t2]][y[t3]]);
                break;}
        }
    }
    
}
