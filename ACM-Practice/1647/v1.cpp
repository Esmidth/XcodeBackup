//
//  main.cpp
//  1647
//
//  Created by Steven Chang on 3/7/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

int Show(const double x, const int y)
{
    if ((int)(x * 10) == y || (int)(x*100) == y || ((int)x) == y){
        printf("%d",y);
        return 1;
    };
    return 0;
}

double Modd(int &x)
{
    if (x < 10) {
        return x;
    }
    else if(x < 100)
    {
        return (double)x/10;
    }
    else
        return (double)x/100;
};

int main()
{
    using namespace std;
    int it;
    int temp;
    vector<int>::iterator ii;
    vector<double>::iterator ii2;
    while (cin >> it && it != 0) {
        vector<int> input;
        vector<double> handle;
        for (int i = 0; i < it; i++) {
            cin >> temp;
            input.push_back(temp);
        }
        for (ii = input.begin();ii != input.end();ii++)
        {
            handle.push_back(Modd(*ii));
        }
        sort(handle.begin(), handle.end());
        for (ii2 = handle.end()-1;ii2 != handle.begin()-1;ii2--)
        {
            for (ii = input.begin(); ii != input.end(); ii++) {
                /*if (*ii2 == 1.2) {
                    printf("12");
                    break;
                }
                if (*ii2 == 1.23) {
                    printf("123");
                    break;
                }
                */
                if(Show(*ii2, *ii))
                    break;
            };
        }
        printf("\n");
    }
};