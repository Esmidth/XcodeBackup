//
//  main.cpp
//  vect2
//
//  Created by Steven Chang on 2/23/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Review
{
    std::string title;
    int rating;
};

bool FillReview(Review &rr);
void ShowReview(const Review &rr);

int main()
{
    vector<Review> books;
    Review temp;
    while (FillReview(temp)) {
        books.push_back(temp);
    }
    int num = books.size();
    if (num > 0) {
        cout << "Thanks.You entered the following:\n" <<"Rating\tBook\n";
        for (int i = 0; i <num; i++) {
            ShowReview(books[i]);
        }
        cout << "Reprising:\n" <<"Rating\tBook\n";
        vector<Review>::iterator pr;
        for (pr = books.begin(); pr != books.end(); pr++) {
            ShowReview(*pr);
        }
        vector<Review> oldlist(books);
        if (num > 3) {
            books.erase(books.begin() + 1, books.begin()+3);
            cout << "After erasure:\n";
            for (pr = books.begin();pr != books.end();pr++)
                ShowReview(*pr);
            books.insert(books.begin(), oldlist.begin()+1,oldlist.begin()+2);
            cout << "After insertation:\n";
            for (pr = books.begin();pr != books.end();pr++)
                ShowReview(*pr);
        }
        books.swap(oldlist);
        cout << "Swapping oldlist with books:\n";
        for (pr = books.begin(); pr != books.end();pr++)
            ShowReview(*pr);
    }
    else
        cout << "Nothing entered, nothing gained.\n";
    return 0;
}

bool FillReview(Review &rr)
{
    cout <<"Enter book title (quit to quit): ";
    getline(cin, rr.title);
    if (rr.title == "quit") {
        return false;
    }
    cout << "Enter book rating: ";
    cin >> rr.rating;
    if (!cin) {
        return false;
    }
    while (cin.get() != '\n') {
        continue;
    }
    return true;
}

void ShowReview(const Review &rr)
{
    cout << rr.rating << "\t" << rr.title <<endl;
}