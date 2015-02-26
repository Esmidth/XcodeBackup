//
//  classic.cpp
//  Test13.1
//
//  Created by Steven Chang on 1/2/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include "classic.h"
#include <iostream>
#include <string.h>

Cd::Cd(char *s11,char *s22,int n1,double x)//:seletions(n1),playtime(x)
{
    strcpy(performers, s11);
    strcpy(label, s22);
    seletions = n1;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
 /*delete[] performers;
 delete[] label;
 performers = new char[strlen(d.performers)+1];
 label = new char[strlen(d.label)+1];
  */
 strcpy(performers,d.performers);
 strcpy(label,d.label);
 seletions = d.seletions;
 playtime = d.playtime;
}
/*

Cd::Cd(const Cd &d)
{
    performers = d.performers;
    label = d.label;
    seletions = d.seletions;
    playtime = d.playtime;
}
*/
Cd::Cd()
{
    strcpy(performers, "Null");
    strcpy(label, "Null");
    seletions = 0;
    playtime = 0.0;
}

Cd::~Cd(){}

void Cd::Report()const
{
    cout << "Performers :" << performers <<endl;
    cout << "Label: " <<label <<endl;
    cout << "Seletions: " << seletions <<endl;
    cout << "Playtime: " << playtime <<endl;
    cout << "Using Cd::Report\n\n"<<endl;
}

Cd & Cd::operator=(const Cd &d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    seletions = d.seletions;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(char *s1,char *s2,char *s3,int s4,double s5):Cd(s2,s3,s4,s5)
{
    strcpy(mainSong,s1);
}

Classic::Classic():Cd()
{
    strcpy(mainSong,"Null");
}

Classic::Classic(const Classic &d):Cd(d)
{
    strcpy(mainSong, d.mainSong);
}

Classic::~Classic(){}

void Classic::Report()const
{
    cout << "MainSong: " << mainSong<<endl;
    Cd::Report();
    cout << "Using Classic::Report\n\n"<<endl;
}

Classic & Classic::operator=(const Classic &s)
{
    strcpy(mainSong,s.mainSong);
    Cd::operator=(s);
    return *this;
}

ostream & operator<<(ostream &os,const Cd &s)
{
    s.Report();
    return os;
}

ostream & operator<<(ostream &os,const Classic &s)
{
    s.Report();
    return os;
}

