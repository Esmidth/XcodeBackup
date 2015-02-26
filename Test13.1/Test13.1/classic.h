//
//  Header.h
//  Test13.1
//
//  Created by Steven Chang on 1/2/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#ifndef CLASSIC_H_
#define CLASSIC_H_

#include <iostream>
#include <cstring>

using namespace std;

class Cd
{
private:
    char performers[50];
    char label[20];
    int seletions;
    double playtime;
public:
    Cd(char *s1,char *s2,int n,double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd&d );
    friend ostream & operator<<(ostream &os,const Cd &);
};

class Classic :public Cd
{
private:
    char mainSong[80];
public:
    Classic(char *s1,char *s2,char *s3,int s4,double s5);
    Classic();
    Classic(const Classic &);
    ~Classic();
    void Report()const;
    Classic & operator=(const Classic &);
    friend ostream & operator<<(ostream &os,const Classic &);
};


#endif
