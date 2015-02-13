//
//  Example.cpp
//  MI
//
//  Created by Steven Chang on 1/10/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//


#include "Example.h"

CExample::CExample(void): m_iFirst(0)
{
}

CExample::~CExample(void)
{
}

CExample::CExample(int iFirst, int iSecond):m_iFirst(iFirst), m_iSecond(iSecond)
{
}
