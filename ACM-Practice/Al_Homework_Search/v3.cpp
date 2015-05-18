//
//  v3.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/16/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <queue>
#include <cmath>
#include <vector>

using namespace std;

struct node
{
    vector<bool> bol;
    int pos;
    int num;
    bool operator==(const node &b)const{
        for(int i = 0;i < bol.size();i++)
        {
            if(bol[i] != b.bol[i])
                return false;
        }
        return true;
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
    for (int i = 0; i < b.bol.size(); i++) {
        cout << b.bol[i] << " ";
    }
    cout << endl;
}

node pos(node &b,int pos,int num)
{
    node temp;
    for (int i = 0; i < b.bol.size(); i++) {
        temp.bol.push_back(!b.bol[i]);
    }
    temp.pos = pos;
    temp.num = num;
    temp.bol[pos-1] = !temp.bol[pos-1];
    return temp;
}
int countt(node &b)
{
    int i = 1;
    int num = b.num;
    for (;(num - pow(b.bol.size()-1, i)) >=0; i++) {
        num -= pow(b.bol.size()-1, i);
    }
    return i;
}
int main()
{
    int num = 0;
    queue<node> Q;
    int ti;
    cin >> ti;
    node Start;
    node End;
    for (int i = 0; i < ti; i++) {
        Start.bol.push_back(1);
        End.bol.push_back(0);
    }
    Start.pos = 0;
    Start.num = 1;
    End.pos = 1;
    End.num = 0;
    Q.push(Start);
    while (!(Q.front() == End)) {
        if (Q.front().pos == 0) {
            Q.push(pos(Q.front(), 1, num));
            num++;
            Q.push(pos(Q.front(), 2, num));
            num++;
            Q.push(pos(Q.front(), 3, num));
            num++;
            Q.push(pos(Q.front(), 4, num));
            num++;
        }
        for (int i = 1;i < Q.front().bol.size()+1; i++) {
            if (i == Q.front().pos) {
                continue;
            }
            else
            {
                Q.push(pos(Q.front(), i, num));
                num++;
            }
        }
        Q.pop();
    }
    cout << countt(Q.front()) <<endl;
}