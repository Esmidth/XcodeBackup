//
//  main.cpp
//  4.2.1
//
//  Created by Steven Chang on 2/28/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 3,b = 4;
    
    int* pa = &a;
    int* pb = &b;
    swap(pa, pb);
    printf("a:%d b:%d\n",*pa,*pb);
    return 0;
    
}