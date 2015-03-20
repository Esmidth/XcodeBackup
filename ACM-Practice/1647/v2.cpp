//
//  v2
//  1647
//
//  Created by Steven Chang on 3/7/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

void Show1(std::string x)
{
    std::cout << x;
}

int main()
{
    using namespace std;
    int it;
    string temp;
    while (cin >> it && it != 0) {
        vector<string> input;
        for (int i = 0; i < it; i++) {
            cin >> temp;
            input.push_back(temp);
        }
        sort(input.begin(), input.end());
        for_each(input.rbegin(), input.rend(), Show1);
        cout << "\n";
    }
};