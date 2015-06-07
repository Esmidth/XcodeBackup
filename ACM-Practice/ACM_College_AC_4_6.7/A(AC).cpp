//
//  main.cpp
//  ACM_College_AC_4_6.7
//
//  Created by Steven Chang on 6/7/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    int ti;
    cin >> ti;
    string temp;
    getline(cin, temp);
    getline(cin, temp);
    if (temp.length()>10) {
        cout << temp[0] << temp.length()-2 << temp[temp.length()-1] << endl;
    }
    else
        cout << temp << endl;
    for (int i = 1; i < ti; i++) {
        string temp;
        getline(cin,temp);
        if (temp.length()>10) {
            cout << temp[0] << temp.length()-2 << temp[temp.length()-1] << endl;
        }
        else
            cout << temp << endl;
    }
}