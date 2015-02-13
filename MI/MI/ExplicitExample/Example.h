//
//  Example.h
//  MI
//
//  Created by Steven Chang on 1/10/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#ifndef __MI__Example__
#define __MI__Example__

#pragma once
class CExample
{
public:
    CExample(void);
public:
    ~CExample(void);
public:
    int m_iFirst;
    int m_iSecond;
public:
    CExample(int iFirst, int iSecond = 4);
};

#endif /* defined(__MI__Example__) */
