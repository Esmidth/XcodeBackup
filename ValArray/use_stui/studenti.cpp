//
//  studenti.cpp
//  ValArray
//
//  Created by Steven Chang on 1/3/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include "studenti.h"

using namespace std;

double Student::Average()const
{
    if(ArrayDb::size()>0)
        return ArrayDb::sum()/ArrayDb::size();
    else
        return 0;
}

const string & Student::Name()const
{
    return (const string &)*this;
}

double & Student::operator[](int n)
{
    return ArrayDb::operator[](n);
}

double Student::operator[](int n)const
{
    return ArrayDb::operator[](n);
}

ostream & Student::arr_out(ostream &os)const
{
    int i;
    int lim = ArrayDb::size();
    if (lim > 0)
    {
        for (i = 0;i < lim;i++)
        {
            os << ArrayDb::operator[](i) << " ";
            if(i % 5 != 0)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else
        os << "Empty array ";
    return os;
}

istream & operator>>(istream & is,Student & stu)
{
    is >> (string &)stu;
    return is;
}

istream & getline(istream & is,Student &stu)
{
    getline(is,(string &)stu );
    return is;
}

ostream & operator<<(ostream & os,const Student &stu)
{
    os << "Scores for " << (const string &)stu << ":\n";
    stu.arr_out(os);
    return os;
}