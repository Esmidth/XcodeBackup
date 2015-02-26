//
//  string1.h
//  CPPPractice
//
//  Created by Steven Chang on 12/10/14.
//  Copyright (c) 2014 Steven Chang. All rights reserved.
//

#ifndef CPPPractice_string1_h
#define CPPPractice_string1_h

#include <iostream>
#include <cstring>
using std::cin;
using std::cout;

using std::ostream;
using std::istream;

class String
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM=80;
public:
    String(const char *s);
    String();
    String(const String & t);
    ~String();
    int length()const {return len;}
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i)const;
    friend bool operator<(const String &st,const String & st2);
    friend bool operator>(const String &st1,const String &st2);
    friend bool operator==(const String &st,const String &st2);
    friend ostream & operator<<(ostream &os,const String &st);
    friend istream & operator>>(istream &os,String &st);
    static int HowMany();
};

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}
String::String(const char *s)
{
    len = std::strlen(s);
    str = new char [len+1];
    std::strcpy(str,s);
    num_strings++;
    
}

String::String()
{
    str = new char [1];
    len = 1;
    num_strings++;
}

String::String(const String & t)
{
    num_strings++;
    len = t.len;
    str = new char [len+1];
    std::strcpy(str,t.str);
}

String::~String()
{
    --num_strings;
    delete []str;
}

String & String::operator=(const String &t)
{
    if (this == &t)
        return *this;
    delete []str;
    len = t.len;
    str = new char [len +1];
    std::strcpy(str,t.str);
    return *this;
}

String & String::operator=(const char *s)
{
    delete []str;
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    return *this;
}

char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i)const
{
    return str[i];
}

bool operator<(const String &st1,const String &st2)
{
    return(std::strcmp(st1.str,st2.str) < 0);
}

bool operator>(const String &st1,const String &st2)
{
    return st2<st1;
}

bool operator==(const String &st1,const String &st2)
{
    return (std::strcmp(st1.str,st2.str) == 0);
}

ostream & operator<<(ostream &os,const String &st)
{
    os << st.str;
    return os;
}
istream & operator>>(istream &is,String &st)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}




#endif
