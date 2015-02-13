//
//  tv.cpp
//  MI
//
//  Created by Steven Chang on 1/22/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include "tv.h"
#include <iostream>

using namespace std;

bool Tv::volup()
{
    volume += 1;
    return true;
};

bool Tv::voldown()
{
    volume -= 1;
    return true;
};

void Tv::chanup()
{
    channel += 1;
}

void Tv::chandown()
{
    channel -= 1;
}

void Tv::settings()const
{
    cout << "Tv is"<<(state == Off? "Off":"On") <<endl;
    if (state == On) {
        cout << "Volume setting = " <<volume <<endl;
        cout << "Channel setting = " << channel <<endl;
        cout << "Mode = " << (mode == Antenna?"antenna":"cable")<<endl;
        cout << "Input = " << (input == TV? "TV":"DVD")<<endl;
    }
}


