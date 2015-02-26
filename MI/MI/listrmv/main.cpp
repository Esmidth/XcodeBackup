//
//  main.cpp
//  listrmv
//
//  Created by Steven Chang on 2/24/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>

void Show(int);
const int LIM = 10;

int main()
{
    using namespace std;
    int ar[LIM] = {4,5,4,2,2,3,4,8,1,4};
    list<int> la(ar,ar+LIM);
    list<int> lb(la);
    cout << "Original list contents "
}