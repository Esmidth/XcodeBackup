//
//  main.cpp
//  newexcp
//
//  Created by Steven Chang on 2/9/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big
{
    double stuff[200000000];
};

int main()
{
    Big *pb;
    
    pb = new (std::nothrow) Big[1000000];
    if(pb == 0)
    {
        cout << "Could not allocate memory. Bye\n";
        exit(EXIT_FAILURE);
    }
    cout << "Memory successfully allocated\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] <<endl;
    delete []pb;
    return 0;
}