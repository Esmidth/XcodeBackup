//
//  main.cpp
//  Stackp
//
//  Created by Steven Chang on 1/10/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//
/*
#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

using namespace std;

int main()
{
    Stack<string> st;
    char ch;
    string po;
    cout << "Please enter a to add a purchase order,\n" <<"P to process a PO,or Q to quit.\n";
    while (cin >>ch &&std::toupper(ch) != 'Q') {
        while(cin.get() !='\n')
            continue;
        if(!std::isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a':
                cout << "Enter a PO number to add: ";
                cin >>po;
                if(st.isfull())
                    cout << "Stack already full\n";
                else
                    st.push(po);
                break;
            case 'P':
            case 'p':
                if(st.isempty())
                    cout << "stack already empty.\n";
                else{
                    st.pop(po);
                    cout << "PO #"<< po <<" popped\n";}
                break;
                
        }
        cout << "Please enter A to add a purchase order,\n"
            <<"P to process a PO,or Q to quit.\n";
        
    }
    cout << "Bye\n";
    return 0;
}
*/