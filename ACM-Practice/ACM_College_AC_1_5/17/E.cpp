//
//  E.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 5/17/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>
#include <vector>


int main() {
    using namespace std;
    int size;
    char t;
    scanf("%d", &size);
    char Q[size][size+1];
    int sum = 0;
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size+1; j++) {
            char temp;
            scanf("%c", &temp);
            if (temp == '#') {
                sum++;
                Q[i][j] = temp;
            }
            else if(temp == '.')
                Q[i][j] == '#';
        }
    }
    printf("%c%c",Q[0][0],Q[1][0]);
    if (sum % 5 != 0) {
        printf("NO");
        return 0;
    }
    else {
        if (sum >= (size-1) * size) {
            printf("NO");
            return 0;
        }
        else {
            for (int k = 0; k < size; ++k) {
                if (Q[0][k] == '#' && Q[0][k + 1] == '#') {
                    printf("NO");
                    return 0;
                }
            }
            for (int i = 0; i < size; ++i) {
                if (Q[i][0] == '#' && Q[i+1][0] == '#') {
                    printf("NO");
                    return 0;
                }
            }
            for (int j = 0; j < size; ++j) {
                if (Q[size-1][j] == '#' && Q[size-1][j+1] == '#') {
                    printf("NO");
                    return 0;
                }
            }
            for (int l = 0; l < size; ++l) {
                if (Q[l][size-1] == '#' && Q[l+1][size-1] == '#') {
                    printf("NO");
                    return 0;
                }
            }
            printf("YES");
            return 0;
        }
    }
}