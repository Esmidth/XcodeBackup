//
//  V3.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 4/12/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main()
{
    char * s = "1214";
    int sum = 0;
    for (int i = 0; *(s+i) != '\0'; i++) {
        switch (*(s+i)) {
            case '1':
                if (*(s+i+1) == '0') {
                    if (*(s+i+2) == '\0') {
                        if (i == 0 || sum == 0) {
                            break;
                        }
                        sum--;
                    }
                    break;
                }
                if (*(s+i+1) == '\0') {
                    break;
                }
                if (*(s+i+1) > '2' && *(s+i+2) == '0') {
                    sum = -1;
                    i++;
                    break;
                }
                sum++;
                break;
                
            case '2':
                if (*(s+i+1) == '0') {
                    if (*(s+i+2) == '\0') {
                        if (i == 0 || sum == 0) {
                            break;
                        }
                        sum--;
                    }
                    break;
                }
                if (*(s+i+1) == '\0') {
                    break;
                }
                if (*(s+i+1) <= '6') {
                    if (*(s+i+2) == '0' && *(s+i+1) > '2') {
                        sum = -1;
                        i++;
                        break;
                    }
                    sum++;
                }
                break;
                
            case '0':
                if (*(s+i+1) == '0') {
                    sum--;
                }
                break;
                
            default:
                if (*(s+i+1) == '0') {
                    sum--;
                }
                break;
        }
    }
    sum++;
    if (*s == '0' || *s == '\0') {
        sum = 0;
    }
    if (sum < 0) {
        sum = 0;
    }
    printf("%d",sum);
}