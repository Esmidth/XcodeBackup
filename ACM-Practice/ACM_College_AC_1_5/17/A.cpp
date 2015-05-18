//
// Exponentiation
//  ACM_College_AC_1_5/17
//
//  Created by Steven Chang on 5/17/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

struct a{
    std::vector<int> start;
    std::vector<int> end;
};

a findd(std::string,std::string);

int main()
{
    using namespace std;
    string seq;
    string A;
    string B;
    getline(cin, seq);
    string rseq;
    for (int i = 0; i < seq.length(); i++) {
        rseq.push_back(seq[seq.length()-i-1]);
    }
    getline(cin, A);
    getline(cin, B);
    a AA = findd(seq, A);
    a BB = findd(seq, B);
    int result[2] = {-1,-1};
    for (int i = 0; i < AA.start.size(); i++) {
        for (int j = 0; j < BB.start.size(); j++) {
            if (AA.end[i] < BB.start[j] && !(AA.start[i] == -1 &&AA.end[i] == -1) ) {
                result[0] = 1;
            }
        }
    }
    AA = findd(rseq, A);
    BB = findd(rseq, B);
    for (int i = 0; i < AA.start.size(); i++) {
        for (int j = 0; j < BB.start.size(); j++) {
            
            if (AA.end[i] < BB.start[j] && !(AA.start[i] == -1 &&AA.end[i] == -1) ) {
                result[1] = 1;
            }
        }
    }
    if (result[0] == -1 && result[1] == -1) {
        cout << "fantasy" << endl;
    }
    else if(result[0] == 1 && result[1] == -1)
        cout << "forward" << endl;
    else if(result[0] == -1 && result[1] == 1)
        cout << "backward" << endl;
    else
        cout << "both" << endl;
    return 0;
}

a findd(std::string seq,std::string a)
{
    struct a temp;
    for (int i = 0; i < seq.length(); i++) {
        if (a[0] == seq[i]) {
            int j = 1;
            for (; j < a.length(); j++) {
                if (a[j] != seq[i+j]) {
                    break;
                }
            }
            if (j <= a.length()-1) {
                continue;
            }
            else{
                temp.start.push_back(i);
                temp.end.push_back((int)a.length()-1+i);
            }
        }
    }
    if (temp.start.size() == 0) {
        temp.start.push_back(0);
        temp.end.push_back(0);
    }
    return temp;
}