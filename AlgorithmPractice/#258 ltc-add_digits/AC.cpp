//
//  main.cpp
//  #258 ltc-add_digits
//
//  Created by Steven Chang on 8/26/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

using namespace std;

int addDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num % 9 == 0) {
        return 9;
    }
    return num % 9;
}
int main(int argc, const char * argv[]) {
    cout << addDigits(0) << endl;
    cout << addDigits(9) << endl;
    cout << addDigits(28) << endl;
    cout << addDigits(17) << endl;
}

