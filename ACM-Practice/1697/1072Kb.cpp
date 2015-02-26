//
//  main.cpp
//  1697
//
//  Created by Steven Chang on 2/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    int T,x,t1,t2,t3,n;
    scanf("%d",&T);
    for (int i = 0; i < T; i++) {
        int apple[100]={'0'};
        int num1 =0,num2 = 0,num3 =0;
        scanf("%d%d%d%d",&x,&t1,&t2,&t3);
        scanf("%d",&n);
        for (int i1 = 0; i1 < n; i1++) {
            scanf("%d",&apple[i1]);
            if ((x+t1) >= apple[i1]) {
                num1++;
            }
            if ((x+t2) >= apple[i1]) {
                num2++;
            }
            if ((x+t3) >= apple[i1]) {
                num3++;
            }
        }
        printf("%d %d %d\n",num1,num2,num3);
        
    }
    return 0;
}