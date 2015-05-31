//
//  D2.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <queue>

struct node
{
    long long lb;
    long long rb;
    long sum;
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

node o11(node b)
{
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
node o22(node b)
{

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


int main(){
    using namespace std;
    long long a,b;
    cin >> a >> b;
    node start = {a,b,0};
    queue<node> q;
    q.push(start);
    node end1 = {a+b,0};
    node end2 = {0,a+b};
    int ti = 0;
    while ((q.front() != end1) && (q.front() != end2)) {
        node temp1 = o11(q.front());
        node temp2 = o22(q.front());
        if (temp1.sum != -1) {
            q.push(temp1);
        }
        if (temp2.sum != -1) {
            q.push(temp2);
        }
        q.pop();
        if (q.empty()) {
            cout << -1;
            return 0;
        }
        if (ti > 1000000) {
            cout << -1;
            return 0;
        }
        ti++;
    }
    cout << q.front().sum;
}