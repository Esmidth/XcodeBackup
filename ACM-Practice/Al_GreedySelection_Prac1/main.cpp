//
//  main.cpp
//  Al_GreedySelection_Prac1
//
//  Created by Steven Chang on 5/14/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include "algorithm"

using namespace std;
#define MaxItems 1000

struct item
{
    int weight;
    int value;
    bool operator<(const item && bb)const {
        return value / (1.0 * weight) > (1.0 * bb.value) / bb.weight;
    }
};

double greedyKnapsack(int n,int capacity,item* itemSet)
{
    double ans = 0;
    sort(itemSet,itemSet+n);
    for(int i = 0;i < n;i++)
    {
        if(capacity >= itemSet[i].weight)
        {
            ans += itemSet[i].value;
            capacity -= itemSet[i].weight;
        }
        else
        {
            ans += capacity * (itemSet[i].value*1.0/itemSet[i].weight);
            break;
        }
    }
    return ans;
}

int main()
{
    int i,n,c;
    item itemSet[MaxItems];
    double ans;
    while(scanf("%d%d",&n,&c) != EOF)
    {
        for(i = 0;i<n;i++)
        {
            scanf("%d",&(itemSet[i].weight));
        }
        for(i = 0;i < n;i++)
            scanf("%d",&(itemSet[i].value));
        ans = greedyKnapsack(n, c, itemSet);
        printf("%.0f\n",ans);
    }
}

