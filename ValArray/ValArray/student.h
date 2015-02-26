//
//  student.h
//  ValArray
//
//  Created by Steven Chang on 1/2/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#ifndef STUDENT_H_
#define STUDENT_H_


#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Student
{
private:
    typedef std::valarray<double> ArrayDb; //To simplify the expression
    
    std::string name;
    ArrayDb scores;
    std::ostream & arr_out(std::ostream &os)const;
public:
    Student(): name("Null Student"),scores(){}
    explicit Student(const std::string &s):name(s),scores(){}
    explicit Student(int n) :name("Nully"),scores(n){}
    Student(const string &s,int n) :name(s),scores(n){}
    Student(const string &s,const ArrayDb &b):name(s),scores(b){}
    Student(const char *str,const double *pd,int n):name(str),scores(pd,n){}
    ~Student(){}
    double Average() const;
    const string & Name()const;
    double & operator[](int i);
    double operator[](int i)const;
    
    //input Reload
    friend istream & operator>>(istream &is,Student &std);
    friend istream & getline(istream &is,Student &stu);
    friend ostream & operator<<(ostream &os,const Student &stu);
};

#endif