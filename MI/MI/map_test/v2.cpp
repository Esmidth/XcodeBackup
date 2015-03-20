//
//  v2.cpp
//  MI
//
//  Created by Steven Chang on 3/2/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<string, int> cnt;
vector<string> words;

int main()
{
    string s;
    while (cin >> s && s != "EOF") {
        words.push_back(s);
    }
    
}