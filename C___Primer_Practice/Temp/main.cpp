//
//  main.cpp
//  Temp
//
//  Created by Steven Chang on 4/29/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<const char*>> s ={
            {"a","b"},
            {"c","d"},
            {"f","g"}
    };
    vector<size_t> indices(s.size());
    size_t i = 0;
    while(i < s.size())
    {
        for (size_t j= 0; j < s.size(); j++)
            cout << s[j][indices[j]];
        cout << endl;
        i = 0;
        while(i < s.size() && ++indices[i] == s[i].size())
            indices[i++] = 0;
    }
    return 0;
}