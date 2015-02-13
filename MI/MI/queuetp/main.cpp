//
//  main.cpp
//  queuetp
//
//  Created by Steven Chang on 1/28/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include "queuetp.h"

int main()
{
    using namespace std;
    
    QueueTP<string> cs(5);
    string temp;
    
    while (!cs.isfull()) {
        cout << "Please enter your name.You will be served in the order of arrival.\n" << "name: ";
        getline(cin, temp);
        cs.enqueue(temp);
    }
    cout << "The queue is full.Processing begins!\n";
    
    while(!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "Now processing "<<temp<<"...\n";
        
    }
    return 0;
}