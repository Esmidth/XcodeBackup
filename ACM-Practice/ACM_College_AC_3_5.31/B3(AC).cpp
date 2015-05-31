//
//  B1.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/31/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <stack>
#include <cstring>
#include <cstdio>
#include <cctype>
int main() {
    using namespace std;
    char temp;
    char inn[1000]= {'\0'};
    std::stack<int> falgg;
    falgg.push(0);
    gets(inn);
    int i=strlen(inn);
    for (int j= 0; j<i;j++) {
        if (inn[j] == '<') {
            switch (inn[j+1]) {
                case 'U':{
                    falgg.push(1);
                    j += 3;
                    break;
                }
                case 'D':{
                    falgg.push(2);
                    j += 5;
                    break;
                }
                case '/':{
                    falgg.pop();
                    if (inn[j+2] == 'U') {
                        j += 4;
                    }
                    else
                        j += 6;
                    break;
                }
            }
        }
        else
            switch (falgg.top()) {
                case 0:
                    printf("%c",inn[j]);
                    break;
                case 1:
                    if (inn[j] >= 97 && inn[j] <= 122) {
                        printf("%c",inn[j]-32);
                    }
                    else
                        printf("%c",inn[j]);
                    break;
                case 2:
                    if (inn[j] >= 65 && inn[j] <= 90) {
                        printf("%c",inn[j]+32);
                    }
                    else
                        printf("%c",inn[j]);
                    break;
            }
    }
}