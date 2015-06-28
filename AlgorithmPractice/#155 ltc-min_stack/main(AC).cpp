//
//  main.cpp
//  #155 ltc-min_stack
//
//  Created by Steven Chang on 6/28/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

using namespace std;

class Minstack
{
public:

    void push(int x);
    void pop();
    int top();
    int getMin();
private:
    int stack[100];
    int topp=-1;
    int min;
};
int main(int argc, const char * argv[]) {
    Minstack a;
    a.push(2);
    a.push(0);
    a.push(3);
    a.push(0);
    cout << a.getMin();
    a.pop();
    cout << a.getMin();
    a.pop();
    cout << a.getMin();
    a.pop();
    cout<<  a.getMin();
    return 0;
}

int Minstack::getMin() {
    if(topp == -1)
        return 0;
    return min;
}

void Minstack::push(int x) {
    topp++;
    stack[topp]= x;
    if(x < min || topp == 0)
        min = x;
}

void Minstack::pop() {
    topp--;
    if(stack[topp+1] == min)
    {
        min = stack[0];
        for (int i = 1; i <=topp; i++) {
            if(min > stack[i])
                min=stack[i];
        }
    }
}

int Minstack::top() {
    return stack[topp];
}
