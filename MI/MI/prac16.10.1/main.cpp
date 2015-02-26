//
//  main.cpp
//  prac16.10.1
//
//  Created by Steven Chang on 2/25/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

bool ifbool(string);

int main()
{
    string temp;
    cout << "Input words.(9 to end)\n";
    while (cin >> temp && temp != "9") {
        if(ifbool(temp))
            cout << "true\n";
        else
            cout << "false\n";
    }
}

bool ifbool(string a)
{
    vector<string> a1;
    vector<string> b1;
    for (auto temp1 = a.begin(); temp1 != a.end(); temp1++) {
        a1.push_back(*temp1);
    }
    for (auto temp1 = a1.rbegin(); temp1 != a.rend(); temp1--) {
        b1.push_back(*temp1);
    }
    if (a1 == b1) {
        return true;
    }
    else
        return false;
};