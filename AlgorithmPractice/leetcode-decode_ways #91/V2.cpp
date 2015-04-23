//
//  V2.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 4/11/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int main(){
    char * test = "110";
    int sum = 0;
    for (int i = 0; *(test+i) != '\0';i++ ) {
        switch (*(test+i)) {
            case '1':
                if (*(test+i+1) == '0' ) {
                    break;
                }
                else{
                    if (*(test+i+1) == '\0') {
                        break;
                    }
                    sum += 1;
                    break;
                }
            case '0':
                if (*(test+i+1) == '0') {
                    sum--;
                    if (*(test+i+2) == '\0')
                    {
                        i++;
                    }
                    break;
                }
                
                break;
                
            case '2':
                if (*(test+i+1) == '0') {
                }
                else{
                    if (*(test+i+1) == '\0') {
                        break;
                    }
                    if (*(test+i+1) <= '6') {
                        sum+=1;
                    }
                    break;
                }
            default:
                break;
        }
    }
    sum++;
    if (*(test) == '\0') {
        sum = 0;
    }
    if (*(test) == '0') {
        sum = 0;
    }
    printf("%d",sum);
}