//
//  main.cpp
//  MaxLISLength
//
//  Created by Steven Chang on 4/28/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

#define MAXN 10000

int LISLength(int,int*);

int main(int argc, const char * argv[]) {
    int n,seq[MAXN];
    while(scanf("%d",&n) != EOF)
    {
        for (int i = 0; i < n; ++i) {
            scanf("%d",&seq[i]);
        }
        printf("%d\n",LISLength(n,seq));
    }
    return 0;
}

int LISLength(int num,int* seqSrc)
{
    int Len[MAXN],res = 1;
    for (int m = 0; m < num; ++m) {
        Len[m] = 1;
        for (int i = 0; i < m; ++i) {
            if (seqSrc[i] < seqSrc[m] && Len[i] + 1 > Len[m])
                Len[m] = Len[i] + 1;
            res = (res > Len[m]?res:Len[m]);
        }
    }
    return res;
}