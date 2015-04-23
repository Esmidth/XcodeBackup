//
//  v2.cpp
//  ACM-Practice
//
//  Created by Steven Chang on 4/20/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
//#include <string>
#include <cmath>

using namespace std;

int func(string,int);
int char2num(string,int,int);


int main()
{
    int ti;
    cin >> ti;
    string inn;
    
    //截获一个回车符
    getline(cin, inn);
    
    
    for (int i = 0; i < ti; i++) {
        getline(cin, inn);
        cout << "Case #" << i+1 <<": "<< func(inn, 0);
    }
    return 0;
}

int func(string inn,int j){
    int res = 0;
    // 递归出口
    if (inn[j] != '(') {
        int temp = 0;
        for (temp = 0; inn[j+temp] != ' '; temp++) {
            if(inn[j+temp] == ')')
                break;
        }
        return char2num(inn,j,j+temp);
    }
    // Process the position shift.
    // 处理位数偏移量
    int ti = 0;
    int temp = 0;
    for (temp = 0; temp < sizeof(inn); temp++) {
        if (inn[j+temp] == ' ') {
            ti++;
        }
        if (ti == 2)
            break;
        if(inn[j+temp] == ')')
            break;
    }
    temp = temp - 4;
    
    // Process operator
    switch (inn[j+1]) {
        case '+':
            res = func(inn, j+3) + func(inn, j+temp+5);
            break;
        case '-':
            res = func(inn, j+3) - func(inn, j+temp+5);
            break;
        case '*':
            res = func(inn, j+3) * func(inn, j+5+temp);
            break;
        case '/':
            res = func(inn, j+3) / func(inn, j+5+temp);
            break;
        default:break;
    }
    return res;
}

int char2num(string inn,int s,int e){
    int tep = e - s;
    int sum = 0;
    for (int i = 0; i < tep; i++) {
        int tpp = 0;
        switch (inn[s+i]) {
            case '1':
                tpp = 1;
                break;
            case '2':
                tpp = 2;
                break;
            case '3':
                tpp = 3;
                break;
            case '4':
                tpp = 4;
                break;
            case '5':
                tpp = 5;
                break;
            case '6':
                tpp = 6;
                break;
            case '7':
                tpp = 7;
                break;
            case '8':
                tpp = 8;
                break;
            case '9':
                tpp = 9;
                break;
            case '0':
                tpp = 0;
                break;
            default:break;
        }
        sum += tpp * pow(10, tep-1-i);
    }
    return sum;
}