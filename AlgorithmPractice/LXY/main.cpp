//
//  main.cpp
//  LXY
//
//  Created by Steven Chang on 4/20/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

void printt(int);

int main(int argc, const char * argv[]) {
    int ti;
    printf(".....\n")
    scanf("%d",&ti);
    printt(ti);
}

void printt(int nm){
    if (nm != 0) {
        printt(nm-1);
        printf("\n");
        for (int i = 0; i < nm; i++) {
            printf("%d ",nm-i);
        }
    }
}
