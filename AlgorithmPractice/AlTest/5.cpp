//
//  5.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 6/23/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string encode(string in){
    string b = "";
    for (int i = 0; i < in.length(); i++) {
        switch (in[i]) {
            case "A":
                b += "a";
                break;
                
            default:
                break;
        }
    }
}
int main()
{
    string test = "ABCDEF";
    string b;
    
}