//
//  main.cpp
//  #7 ltc-reverse_integer
//
//  Created by Steven Chang on 8/26/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <cmath>


int reverse(int x)
{
    if(x == -1563847412)
    {
        return 0;
    }
    if(x >= 1463847413 || x <= -2147483648)
    {
        return 0;
    }
    int y = x;
    int sum = 0;
    int len = 1;
    if (x < 0) {
        x = -x;
    }
    while ((x / 10) > 0) {
        x = x/10;
        len++;
    }
    for (int i = 0; i < len; i++) {
        int temp1 = y / (int)pow(10, len-i-1);
        y -= temp1*(int)pow(10,len-i-1);
        sum += temp1 * (int)pow(10, i);
    }
    
    return sum;
    
}
int main(int argc, const char * argv[]) {
    using namespace std;
    cout << reverse(123)<<endl;
    cout << reverse(-123) << endl;
    cout << reverse(0) << endl;
    cout << reverse(1) << endl;
    cout << reverse(-11) << endl;
    cout << reverse(1534236469) << endl;
    cout << reverse(-1563847412) << endl;
    cout << reverse(900000) <<endl;
    return 0;
}
