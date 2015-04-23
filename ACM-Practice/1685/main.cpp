//
//  main.cpp
//  1685
//
//  Created by Steven Chang on 4/20/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main() {
    int ti;
    scanf("%d", &ti);
    int a, b, c;
    int r[ti];
    for (int i = 0; i < ti; i++) {
        scanf("%d%d%d", &a, &b, &c);
        //printf("Case #%d: ", i + 1);
        float temp;
        temp = ((float) (a - c) / (float) b);
        if ((int) temp != temp) {
            //printf("YES\n");
            r[i] = 1;
        }
        else if ((int) temp % 2 == 0) {
            //printf("NO\n");
            r[i] = 0;
        }
        else
            //printf("YES\n");
        {r[i] = 1;}
    }
    for (int j = 0; j < ti; j++) {
        printf("Case #%d:",j+1);
        if(r[j] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

