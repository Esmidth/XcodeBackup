//
//  v4(with STL).cpp
//  ACM-Practice
//
//  Created by Steven Chang on 2/23/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    int n,T,temp;
    cin >> T;
    ostringstream oss;
    for(int i = 0;i < T;i++)
    {
        vector<int> numbers;
        cin >> n;
        for (int i1 = 0; i1 < n; i1++) {
            cin >> temp;
            numbers.push_back(temp);
        }
        sort(numbers.begin(), numbers.end());
        oss << "Case #"<< i+1<< ":";
        for(auto x:numbers)
        {
            oss << " "<< x;
        }
        oss << "\n";
    };
    cout << oss.str();
    return 0;
};
