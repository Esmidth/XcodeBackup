//
//  main.cpp
//  clock
//
//  Created by Steven Chang on 6/25/15.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Student{
private:
    string StuNo;
    string StuName;
    int StuAge;
    string StuClass;
public:
    void setStuNo(string);
    void setStuName(string);
    void setStuAge(int);
    void setStuClassNo(string);
    string getStuNo();
    string getStuName();
    int getStuAge();
    string getStuClassNo();
};
void Student::setStuNo(string n){
    StuNo = n;
}
void Student::setStuName(string n){
    StuName = n;
}
void Student::setStuAge(int n){
    StuAge = n;
}
void Student::setStuClassNo(string n){
    StuClass = n;
}
string Student::getStuNo(){
    return StuNo;
}
int Student::getStuAge(){
    return StuAge;
}
string Student::getStuName(){
    return StuName;
}
string Student::getStuClassNo(){
    return StuClass;
}


int main(int argc, const char * argv[]) {
    Student t;
    t.setStuNo("08123");
    t.setStuName("张三");
    t.setStuAge(18);
    t.setStuClassNo("理学院08");
    cout << t.getStuNo() << endl;
    cout << t.getStuName() << endl;
    cout << t.getStuAge() << endl;
    cout << t.getStuClassNo() << endl;
}


