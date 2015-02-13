//
//  main.cpp
//  Stackp1
//
//  Created by Steven Chang on 1/10/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stcktp1.h"

const int Num = 10;
using namespace std;

int main(int argc, const char * argv[]) {
    //std::srand(std::time(0));
    cout << "Please enter stack size: ";
    int stacksize;
    cin >> stacksize;
    Stack<const char*> st(stacksize);
    const char *in[Num] = {
        "1 :Hank Gilgamesh",
        "2 :Kiki Ishtar",
        "3 :Betty Rocker",
        "4 :Ian Flagranti",
        "5 :Wolfgang Kibble",
        "6 :Portia Koop",
        "7 :Joy Almondo",
        "8 :Xaverie Paprika",
        "9 :Juan Moore",
        "10 :Misha Mache"
    };
    
    const char *dout[Num];
    
    int processed = 0;
    int nextin = 0;
    while (processed <Num) {
        if(st.isempty())
            st.push(in[nextin++]);
        else if(st.isfull())
            st.pop(dout[processed++]);
        else if(rand() % 2 && nextin <Num)
            st.push(in[nextin++]);
        else
            st.pop(dout[processed++]);
    }
    for(int i = 0;i < Num;i++)
        cout << dout[i] <<endl;
    cout << "Bye.\n";
    return 0;
};
