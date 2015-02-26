//
//  main.cpp
//  strgst1
//
//  Created by Steven Chang on 2/24/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    using namespace std;
    string letters;
    cout << "Enter the letter grouping (quit to quit): ";
    while (cin >> letters && letters != "quit") {
        cout << "Permutations of " << letters <<endl;
        sort(letters.begin(), letters.end());
        cout << letters <<endl;
        while (next_permutation(letters.begin(), letters.end())) {
            cout << letters <<endl;
        }
        cout << "Enter next sequence (quit to quit): ";
    }
    cout <<"Done.\n";
    return 0;
}