//
//  main.cpp
//  Al V4
//
//  Created by Steven Chang on 3/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

long S(int n,int m)
{
    if((n == 0)||(m==1)) return 1;
    if (n < m) {
        return S(n,n);
    }
    return S(n, m-1) + S(n-m,m);
    
}
int main()
{
    std::cout << S(6,6) ;
}
