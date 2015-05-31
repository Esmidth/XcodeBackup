//
//  A2.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <vector>

struct node{
    int num;
    int pos;
    bool operator()(node a,node b)
    {
        return a.num < b.num;
    }
};

bool comparte(node a,node b)
{
    return a.num < b.num;
}

int main(int argc, const char * argv[]) {
    using namespace  std;
    int ti;
    int sum = 0;
    scanf("%d",&ti);
    vector<node> inn1;
    node temp;
    for (int i = 0; i < ti; i++) {
        scanf("%d",&temp.num);
        temp.pos = i;
        inn1.push_back(temp);
    }
    sort(inn1.begin(), inn1.end(),comparte);
    for (int i = 1; i < ti; i++) {
        for (int j = 0; j < i; j++) {
            if(inn1[j].pos > inn1[i].pos)
                sum++;
        }
    }
    printf("%d",sum);
}

