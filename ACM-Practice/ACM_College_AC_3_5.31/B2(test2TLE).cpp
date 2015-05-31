//
//  B1.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <stack>

int main() {
    char temp;
    int i = 0;
    std::stack<int> falgg;
    falgg.push(0);
    while (scanf("%c", &temp) && temp != '\n') {
        if (temp == '<') {
            scanf("%c",&temp);
            switch (temp) {
                case 'U':{
                    falgg.push(1);
                    while (scanf("%c",&temp)&&temp!='>') {
                    }
                    break;}
                case 'D':{
                    falgg.push(2);
                    while (scanf("%c",&temp)&&temp!='>') {
                    }
                    break;}
                case '/':{
                    falgg.pop();
                    while (scanf("%c",&temp)&&temp!='>') {
                    }
                    break;}
            }
        }
        else {
            switch (falgg.top()) {
                        case 0:
                            printf("%c",temp);
                            break;
                        case 1:
                            if (temp >= 97 && temp <= 122) {
                                printf("%c",temp-32);
                            }
                            else
                                printf("%c",temp);
                            break;
                        case 2:
                            if (temp >= 65 && temp <= 90) {
                                printf("%c",temp+32);
                            }
                            else
                                printf("%c",temp);
                            break;
                    }
                    i++;
                }
    }
}