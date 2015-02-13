//
//  winec.h
//  MI
//
//  Created by Steven Chang on 1/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#ifndef _WINEC_H_
#define _WINEC_H_

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

template<class T1,class T2>
class Pair
{
private:
    T1 years;
    T2 bottles;
public:
    T1 first();
    T2 second();
    T1 first() const{return years;};
    T2 second() const {return bottles;}
    Pair(const T1 & aval,T2 & bval) :years(aval),bottles(bval){}
    Pair(){}
    void setyear(T1 a){years = a;};
    void setbottles(T2 a){bottles = a;}
};

template<class T1,class T2>
T1 Pair<T1,T2>::first()
{
    return years;
}

template<class T1,class T2>
T2 Pair<T1,T2>::second()
{
    return bottles;
}

typedef Pair<int, int> PairArray;

class Wine: public PairArray
{
private:
    string labelname;
    int stoyrs;
public:
    Wine():labelname("null"),stoyrs(0){}
    Wine(string lab,int yrs):labelname(lab),stoyrs(yrs){}
    Wine(string lab,int yrs,int yrss[],int bott[]):labelname(lab),stoyrs(yrs)
    {
        int i = rand();
        PairArray::setyear(yrss[i]);
        PairArray::setbottles(bott[i]);
    }
    ~Wine(){}
    void GetBottles();
    void Show();
    string Label();
    int sum();
};

void Wine::Show()
{
    cout << "Name: " <<labelname<<endl;
    cout << "Store years: " <<stoyrs<<endl;
    cout << "Years: " <<PairArray::first() <<endl;
    GetBottles();
};

void Wine::GetBottles()
{
    cout << "Bottles: " << PairArray::second()<<endl;
}

string Wine::Label()
{
    return labelname;
}

int Wine::sum()
{
    return PairArray::second();
}






#endif /* defined(__MI__winec__) */
