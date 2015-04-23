//  main.cpp
//  1687
//  Created by Steven Chang on 4/20/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.


#include <iostream>
#include <string>

using namespace std;

//int summ(string);

int main(int argc, const char * argv[]) {
    int ti;
    cin >> ti;
    char temp;
    char a;
    int b,c;
    string inn;
    for (int i = 0; i < ti; i++) {
        cin >> temp;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> temp;
        switch (a) {
            case '+':
                cout << "Case #" << i+1 << ": " << b+c;
                break;
            case '-':
                cout << "Case #" << i+1 << ": " << b-c;
                break;
            case '*':
                cout << "Case #" << i+1 << ": " << b*c;
                break;
            case '/':
                cout << "Case #" << i+1 << ": " << b/c;
                break;
        }
        cout << endl;
        /*
        getline(cin, inn);
        cout << inn << endl;
        cout << inn[2] << "\n" << (int)inn[4];
        */
    }
    return 0;
}
/*
int summ(string temp)
{
    return 0;
}*/