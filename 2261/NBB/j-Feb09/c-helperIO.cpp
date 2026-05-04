#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
// if a class name is Car, make insterable and extractable to and from ostream and istream
/*
ostream& operator<<(ostream& ostr, const Car& right);
istream& operator>>(istream& istr, Car& right);


*/

int main() {
   cout << "OOP244 NBB - Feb 09" << endl;
   ValidatedInt v("Number", 20, 10, 50), x, y;

   cin >> v;
   // istream& operator>>(istream& left, ValidatedInt& right)
   cout << "The validatedInt " << v << " is here" << endl;
   //          cout            << v << " is here << endl;
   //                   cout        << " is here << endl;
   // ostream& operator<<(ostream& left, const ValidatedInt& right);
   return 0;
}