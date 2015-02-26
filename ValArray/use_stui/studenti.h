//
//  studenti.h
//  ValArray
//
//  Created by Steven Chang on 1/3/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#ifndef STUDENTI_H_
#define STUDENTI_H_

#include <iostream>
#include <valarray>
#include <string>

using namespace std;

class Student:private std::string ,private std::valarray<double>
{
private:
    typedef valarray<double> ArrayDb;
    ostream & arr_out(ostream &os)const;
public:
    Student() :string("Null Student"),ArrayDb(){}
    explicit Student (const string & s):string(s),ArrayDb(){}
    explicit Student (int n):string("Nully"),ArrayDb(){}
    Student(const string &s,int n):string(s),ArrayDb(n){}
    Student(const string &s,const ArrayDb &a):string(s),ArrayDb(a){}
    Student(const char *str,const double *pd,int n):string(str),ArrayDb(pd,n){}
    ~Student(){}
    double Average()const;
    
    
    double & operator[](int n);
    double operator[](int i)const;
    const string & Name()const;
    
    //friends,input
    
    friend istream & operator >>(istream &is,Student &stu);
    friend istream & getline(istream &is,Student &stu);
    friend ostream & operator<<(ostream &os,const Student &stu);
};

#endif





