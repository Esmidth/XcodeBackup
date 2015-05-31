//
//  B1.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <stack>
#include "time.h"

int main() {
    char inn[1000] = {'\0'};
    char temp;
    int i = 0;
    time_t t1, t2;
    t1 = clock();
    std::stack<int> falgg;
    falgg.push(0);
    int flagr = 0;
    while (scanf("%c", &temp) && temp != '\n') {
        if (temp == '<') {
            inn[i] = temp;
        }
        else if (temp == '>') {
            flagr = 0;
        }
        else {
            if (flagr == 0) {
                if (temp == 'U' && inn[i] == '<') {
                    falgg.push(1);
                    flagr = 1;
                }
                else if (temp == 'D' && inn[i] == '<') {
                    falgg.push(2);
                    flagr = 1;
                }
                else if (temp == '/' && inn[i] == '<') {
                    falgg.pop();
                    flagr = 1;
                }

                else {
                    switch (falgg.top()) {
                        case 0:
                            inn[i] = temp;
                            break;
                        case 1:
                            if (temp >= 97 && temp <= 122) {
                                inn[i] = temp - 32;
                            }
                            else
                                inn[i] = temp;
                            break;
                        case 2:
                            if (temp >= 65 && temp <= 90) {
                                inn[i] = temp + 32;
                            }
                            else
                                inn[i] = temp;
                            break;
                    }
                    i++;
                }
            }
        }
    }

    for (int j = 0; j < i; j++) {
        printf("%c", inn[j]);
    }
    t2 = clock();
    printf("%d", (int) (t2 - t1));
}