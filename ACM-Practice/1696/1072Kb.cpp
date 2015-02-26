//
//  1072Kb.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 2/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i,n;
    
    char a[30],b[20],c[20];
    
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%s",&c);
        scanf("%s",&a);
        scanf("%s",&b);
        printf("Case #%d: ",i+1);
        if (a[0] == b[0]) {
            printf("Once again!\n");
        }
        else if(
            (a[0] == 's' && b[0]=='p') || (a[0] == 's' && b[0] == 'r') || (a[0]=='r' && b[0]=='s'))
            printf("I made it!~\n");
        else
            printf("No no no!\n");
    }
    return 0;
}