//
//  V2.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 2/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void Judge(std::string &a,std::string &b);
int IN(std::string &a);

int main()
{
    int dataArray;
    string d1;
    string A;
    string B;
    
    cin >> dataArray;
    for (int i = 0; i < dataArray; i++) {
        cin >>d1;
        if (d1 != "Rock-paper-scissors!") {
            break;
        }
        cin >> A;
        cin >> B;
        cout << "Case #" <<i+1 <<": ";
        Judge(A, B);
    }
    return 0;
}

void Judge(std::string &a,std::string &b)
{
    int a1,b1;
    a1 = IN(a);
    b1 = IN(b);
    if ((a1-b1) == 1 || (a1-b1) == -2) {
        std::cout << "I made it!~"<<endl;
    }
    else if((a1-b1) == 0)
    {
        std::cout << "Once again!"<<endl;
    }
    else{std::cout <<"No no no!"<<std::endl;}
};

int IN(std::string &a)
{
    if (a == "paper") {
        return 2;
    }
    else if (a == "rock") {
        return 1;
    }
    else{
        return 0;}
};