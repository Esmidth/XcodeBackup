//
//  main.cpp
//  1696
//
//  Created by Steven Chang on 2/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    int dataArrays;
    string diologe = "Rock-paper-scissors!";
    string d1;
    string A;
    string B;
    
    cin >> dataArrays;
    for (int i = 0; i < dataArrays; i++) {
        cin >> d1;
        if (d1 != diologe) {
            break;
        }
        cin >> A;
        cin >> B;
        if (A == "scissors") {
            if (B == "scissors") {
                cout << "Case #" <<i+1<<": Once again!" <<endl;
            }
            else if(B == "rock")
                cout << "Case #"<<i+1<<": No no no!" <<endl;
            else if(B == "paper")
                cout << "Case #"<<i+1<<": I made it!~" <<endl;
        }
        else if( A == "rock")
        {
            if (B == "scissors") {
                cout <<"Case #"<<i+1<< ": I made it!~" <<endl;
            }
            else if(B == "rock")
            {
                cout << "Case #"<<i+1<<": Once again!" <<endl;
            }
            else if(B == "paper")
            {
                cout <<"Case #"<<i+1<< ": No no no!" <<endl;
            }
        }
        else if(A == "paper")
        {
            if( B == "scissors")
            {
                cout <<"Case #"<<i+1<< ": No no no!" <<endl;
            }
            else if(B == "rock")
                cout << "Case #"<<i+1<<": I made it!~" <<endl;
            else if(B == "paper")
                cout << "Case #"<<i+1<<": Once again!"<<endl;
        }
    }
    return 0;
}
