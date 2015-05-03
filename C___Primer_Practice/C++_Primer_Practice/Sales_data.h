#ifndef _SALES_DATA
#define _SALES_DATA

#include <string>

using namespace std;

class Sales_data
{
private:
    string ISBN;
    int SalesNum;
    int OriginP;
    int TrueP;
public:
    Sales_data();
    Sales_data(const string);
    Sales_data(const string is,int SN,int OP,int TP);
    Sales_data(istream & cin);
    std::ostream & operator<<(ostream & os);
};

Sales_data::Sales_data() {
    ISBN = "Null";
    SalesNum = 0;
    OriginP = 0;
    TrueP = 0;
}

Sales_data::Sales_data(const string is) {
    ISBN = is;
    SalesNum = 0;
    OriginP = 0;
    TrueP = 0;
}

Sales_data::Sales_data(const string is, int SN, int OP, int TP) {
    ISBN = is;
    SalesNum = SN;
    OriginP = OP;
    TrueP = TP;
}

Sales_data::Sales_data(istream &cin) {
    cout << "ISBN: ";
    cin >> ISBN;
    cout << "\nSales Number: ";
    cin >> SalesNum;
    cout << "\nOrigin Price: ";
    cin >> OriginP;
    cout << "\nTrue Price: ";
    cin >> TrueP;
}

std::ostream & Sales_data::operator <<(ostream &os) {
    os << "Sales Number: " << SalesNum;
    return os;
}

#endif