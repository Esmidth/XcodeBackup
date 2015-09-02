//
//  main.cpp
//  #273 ltc-Integer_2_English_Words
//
//  Created by Steven Chang on 9/3/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string hun(int n)
{
    if (n >= 1000 || n == 0) {
        return "error";
    }
    string rr;
    switch (n / 100) {
        case 1:
            rr += "One Hundred";
            break;
        case 2:
            rr += "Two Hundred";
            break;
        case 3:
            rr += "Three Hundred";
            break;
        case 4:
            rr += "Four Hundred";
            break;
        case 5:
            rr += "Five Hundred";
            break;
        case 6:
            rr += "Six Hundred";
            break;
        case 7:
            rr += "Seven Hundred";
            break;
        case 8:
            rr += "Eight Hundred";
            break;
        case 9:
            rr += "Nine Hundred";
            break;
        default:
            break;
    }
    n = n % 100;
    switch (n / 10) {
        case 1:
            n = n % 10;
            switch (n) {
                case 0:
                    //rr += " ";
                    rr += "Ten";
                    break;
                case 1:
                    //rr += " ";
                    rr += "Eleven";
                    break;
                case 2:
                    //rr += " ";
                    rr += "Twelve";
                    break;
                case 3:
                    //rr += " ";
                    rr += "Thirteen";
                    break;
                case 4:
                    //rr += " ";
                    rr += "Fourteen";
                    break;
                case 5:
                    //rr += " ";
                    rr += "Fifteen";
                    break;
                case 6:
                    //rr += " ";
                    rr += "Sixteen";
                    break;
                case 7:
                    //rr += " ";
                    rr += "Seventeen";
                    break;
                case 8:
                    //rr += " ";
                    rr += "Eighteen";
                    break;
                case 9:
                    //rr += " ";
                    rr += "Nineteen";
                    break;
                default:
                    break;
            }
            return rr;
        case 2:
            rr += "Twenty";
            break;
        case 3:
            rr += "Thirty";
            break;
        case 4:
            rr += "Forty";
            break;
        case 5:
            rr += "Fifty";
            break;
        case 6:
            rr += "Sixty";
            break;
        case 7:
            rr += "Seventy";
            break;
        case 8:
            rr += "Eighty";
            break;
        case 9:
            rr += "Ninety";
            break;
        default:
            break;
    }
    n = n % 10;
    switch (n) {
        case 1:
            rr += "One";
            break;
        case 2:
            rr += "Two";
            break;
        case 3:
            rr += "Three";
            break;
        case 4:
            rr += "Four";
            break;
        case 5:
            rr += "Five";
            break;
        case 6:
            rr += "Six";
            break;
        case 7:
            rr += "Seven";
            break;
        case 8:
            rr += "Eight";
            break;
        case 9:
            rr += "Nine";
            break;
        default:
            break;
    }
    return rr;
}

string numberToWords(int num)
{
    string r;

    string temp = hun(num / 1000000000);
    if (temp != "error") {
        r = r + temp + " Billion";
    }
    num = num % 1000000000;
    temp = hun(num / 1000000);
    if (temp != "error") {
        r += " ";
        r = r + temp + " Million";
    }
    num = num % 1000000;
    temp = hun(num / 1000);
    if (temp != "error") {
        r = r + temp + " Thousand";
    }
    num = num % 1000;
    temp = hun(num);
    if (temp != "error") {
        r = r + temp;
    }
    return r;
}
int main(int argc, const char * argv[]) {
    /*
    cout << hun(1000) << endl;
    cout << hun(999) << endl;
    cout << hun(87) <<endl;
    cout << hun(10) <<endl;
    cout << hun(111) << endl;
    /**/
    cout << numberToWords(123) << endl;
    cout << numberToWords(12345) << endl;
    cout << numberToWords(1234567) << endl;
    
    return 0;
}
