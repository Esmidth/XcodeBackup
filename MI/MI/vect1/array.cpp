//
//  array.cpp
//  MI
//
//  Created by Steven Chang on 2/23/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>

const int NUM = 5;

int main()
{
    using namespace std;
    
    int ratings[NUM];
    string titles[NUM];
    
    cout << "Array" <<endl;
    
    cout << "You will do exactly as told.You will enter\n" <<NUM <<" books titles and your ratings (0-10).\n";
    int i;
    for (i = 0; i < NUM;i++) {
        cout << "Enter titles #" <<i+1 <<": ";
        getline(cin, titles[i]);
        cout << "Enter your rating(0-10): ";
        cin >> ratings[i];
        cin.get();
    }
    
    cout << "Thank you.You entered the following:\n" << "Rating\tBook\n";
    for (i = 0; i < NUM; i++) {
        cout << ratings[i] << "\t" <<titles[i] <<endl;
    }
    return 0;
    
}