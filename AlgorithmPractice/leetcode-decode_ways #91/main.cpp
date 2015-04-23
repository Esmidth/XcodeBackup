//
//  main.cpp
//  leetcode-decode_ways #91
//
//  Created by Steven Chang on 4/11/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int numDecodings(char *s);

int main(){
    char* test = "111";
    //numDecodings(test);
    int sum = 0;
    for (int i = 0; *(test+i) != '\0';i++ ) {
        switch (*(test+i)) {
            case '1':
                if (*(test+i+1) == '0' ) {
                    sum++;
                }
                else{
                    if (*(test+i+1) == '\0') {
                        sum++;
                        break;
                    }
                    sum += 2;
                    break;
                }
            case '0':
                break;
            
            case '2':
                if (*(test+i+1) == '0') {
                    sum++;
                }
                else{
                    if (*(test+i+1) == '\0') {
                        sum++;
                        break;
                    }
                    sum += 2;
                    break;
                }
            default:
                sum++;
                break;
        }
    }
    printf("%d",sum);
}

int numDecodings(char *s)
{
    int sum;
    return sum;
}