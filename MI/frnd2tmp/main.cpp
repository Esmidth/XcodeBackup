//
//  main.cpp
//  frnd2tmp
//
//  Created by Steven Chang on 1/21/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

using namespace std;

template<typename T>
class HasFriend
{
private:
    T item;
    static int ct;
public:
    HasFriend(const T &i):item(i){ct++;}
    ~HasFriend(){ ct--;}
    friend void counts();
    friend void reports(HasFriend<T> &);
};

template<typename T>
int HasFriend<T>::ct = 0;

void counts()
{
    cout << "int count: " << HasFriend<int>::ct<< "; ";
    cout << "double count: " << HasFriend<double>::ct << endl;
}

void reports(HasFriend<int> &hf)
{
    cout << "HasFriend<int>: " << hf.item <<endl;
}

void reports(HasFriend<double> &hf)
{
    cout << "HasFriend<double>: " << hf.item << endl;
}

int main()
{
    cout << "No objects declared: ";
    counts();
    HasFriend<int> hfi1(10);
    cout << "After hfil1 declared: ";
    counts();
    HasFriend<int> hfi2(20);
    counts();
    HasFriend<double> hfdb(10.5);
    cout << "After hfdb declared: ";
    counts();
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);
    
    return 0;
}