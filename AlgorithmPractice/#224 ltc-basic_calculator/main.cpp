//
//  main.cpp
//  #224 ltc-basic_calculator
//
//  Created by Steven Chang on 6/22/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int calculate(string);

int main(int argc, const char * argv[]) {
    string t1 = "1+1";
    cout << calculate(t1);
}

int calculate(string s)
{
    int num[s.length()];
    int sym[s.length()];
    int j = 0;
    int j2 = 0;
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
            case 40:
                num[j] = 999999;
                j++;
                sym[j2] = 40; // (
                j2++;
                break;
            case 41:
                num[j] = 999999;
                j++;
                sym[j2] = 41;// )
                j2++;
                break;
            case 42:
                num[j] = 999999;
                j++;
                sym[j2] = 42; // *
                j2++;
                break;
            case 43:
                num[j] = 999999;
                j++;
                sym[j2] = 43; // +
                j2++;
                break;
            case 45:
                num[j] = 999999;
                j++;
                sym[j2] = 45; // -
                j2++;
                break;
            case 47:
                num[j] = 999999;
                j++;
                sym[j2] = 47; // /
                j2++;
                break;
            default:
                break;
        }
        if (s[i] < 65 && s[i] >= 48) {
            num[j] = (int)(s[i]-48);
            j++;
        }

    }
    
}