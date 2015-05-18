//
//  v2.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/14/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

struct node
{
    bool v1;
    bool v2;
    bool v3;
    bool v4;
    int pos;
    int num;
    bool operator==(const node &b)const{
        if(v1 == b.v1 && v2 == b.v2 && v3 == b.v3 && v4 == b.v4)
        {
            return true;
        }
        else
            return false;
    }
    bool operator!=(const node &b)const
    {
        if(*this == b)
            return false;
        else
            return true;
    }
};

void printt(node &b)
{
    cout << b.v1;
    cout << " "<<b.v2;
    cout << " " << b.v3;
    cout << " " << b.v4;
}

node pos(node &b,int pos,int num)
{
    node temp;
    temp.v1 = !b.v1;
    temp.v2 = !b.v2;
    temp.v3 = !b.v3;
    temp.v4 = !b.v4;
    temp.pos = pos;
    temp.num = num;
    switch (pos) {
        case 1:
            temp.v1 = b.v1;
            break;
        case 2:
            temp.v2 = b.v2;
            break;
        case 3:
            temp.v3 = b.v3;
            break;
        case 4:
            temp.v4 = b.v4;
    }
    return temp;
}
int countt(node &b)
{
    int i = 1;
    int num = b.num;
    for (;(num - pow(3, i)) >=0; i++) {
        num -= pow(3, i);
    }
    return i;
}
int main()
{
    int num = 0;
    queue<node> Q;
    node start = {true,true,true,true,0,1};
    node end = {false,false,false,false,0,0};
    Q.push(start);
    int t;
    while (!(Q.front() == end)) {
        switch (Q.front().pos) {
            case 1:
                Q.push(pos(Q.front(), 2,num));
                num++;
                Q.push(pos(Q.front(), 3,num));
                num++;
                Q.push(pos(Q.front(), 4,num));
                num++;
                break;
            case 2:
                Q.push(pos(Q.front(), 1,num));
                num++;
                Q.push(pos(Q.front(), 3,num));
                num++;
                Q.push(pos(Q.front(), 4,num));
                num++;
                break;
            case 3:
                Q.push(pos(Q.front(), 1,num));
                num++;
                Q.push(pos(Q.front(), 2,num));
                num++;
                Q.push(pos(Q.front(), 4,num));
                num++;
                break;
            case 4:
                Q.push(pos(Q.front(), 1,num));
                num++;
                Q.push(pos(Q.front(), 2,num));
                num++;
                Q.push(pos(Q.front(), 3,num));
                num++;
            default:
                Q.push(pos(Q.front(), 1,num));
                num++;
                Q.push(pos(Q.front(), 2,num));
                num++;
                Q.push(pos(Q.front(), 3,num));
                num++;
                Q.push(pos(Q.front(), 4,num));
                num++;
                break;
        }
        printt(Q.front());
        cout << endl;
        Q.pop();
        t += 4;
    }
    cout << Q.size() << endl;
    cout << Q.front().num << endl;
    cout << countt(Q.front()) <<endl;
    cout << t;
}

