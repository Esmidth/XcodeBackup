//
//  main.cpp
//  smrtptrs
//
//  Created by Steven Chang on 2/16/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Report
{
private:
    string str;
public:
    Report(const string s):str(s){cout << "Object created!\n";}
    ~Report(){cout << "Object deleted!\n" ;}
    void comment() const {cout << str << "\n";}
};

int main()
{
    {
        auto_ptr<Report> ps(new Report("Using auto_ptr"));
        ps->comment();
    }
    {
        shared_ptr<Report> ps(new Report("Using shared_ptr"));
        ps->comment();
    }
    {
        unique_ptr<Report> ps(new Report("using unique_ptr"));
        ps->comment();
    }
}
