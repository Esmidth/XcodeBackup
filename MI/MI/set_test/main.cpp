//
//  main.cpp
//  set_test
//
//  Created by Steven Chang on 3/2/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>
#include <set>
#include <sstream>

using namespace std;

set<string> dict;

int main()
{
    string s,buf;
    while (cin >> s && s != "EOF") {
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i])) {
                s[i] = tolower(s[i]);
            }
            else
                s[i] = ' ';
        }
        stringstream ss(s);
        while (ss >> buf) {
            dict.insert(buf);
        }
    }
    for (set<string>::iterator it = dict.begin(); it != dict.end(); ++it) {
        cout << *it <<endl;
    }
    return 0;
}