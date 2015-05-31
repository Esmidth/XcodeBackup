//
//  D1.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <queue>

struct node
{
    int lb;
    int rb;
    int sum;
    bool operator==(const node &b)
    {
        if(lb == b.lb && rb == b.rb)
        {
            return true;
        }
        else
            return false;
    }
    bool operator!=(const node &b)
    {
        return !(*this == b);
    }
};

node operatorr(node b,int a)
{
    if (a == 0) {
        if (b.lb < b.rb) {
            return {-1,-1,-1};
        }
        else
        {
            b.lb -= b.rb;
            b.rb += b.rb;
            b.sum += 1;
            return b;
        }
    }
    else{
        if (b.rb < b.lb) {
            return {-1,-1,-1};
        }
        else{
            b.rb -= b.lb;
            b.lb += b.lb;
            b.sum += 1;
            return b;
        }
    }
}

int main(){
    using namespace std;
    int a,b;
    cin >> a >> b;
    node start = {a,b,0};
    queue<node> q;
    q.push(start);
    node end1 = {a+b,0};
    node end2 = {0,a+b};
    while ((q.front() != end1) && (q.front() != end2)) {
        node temp1 = operatorr(q.front(), 0);
        node temp2 = operatorr(q.front(), 1);
        if (temp1.sum != -1) {
            q.push(temp1);
        }
        if (temp2.sum != -1) {
            q.push(temp2);
        }
        if (q.empty()) {
            cout << -1;
            return 0;
        }
        q.pop();
    }
    cout << q.front().sum;
}