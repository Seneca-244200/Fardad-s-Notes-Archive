
#include <iostream>
#include "string.h"
using namespace std;

class Int {
   int m_value;
public:
   Int(int value);
   void set(int value);
   int get()const;

   ostream& print(ostream& ostr = cout)const;
   istream& read(istream& istr = cin);

};
istream& Int::read(istream& istr) {
   return istr >> m_value;
}
ostream& Int::print(ostream& ostr)const {
   return ostr << m_value;
}
Int::Int(int value) {
   set(value);
}
void Int::set(int value) {
   m_value = value;
}
int Int::get()const {
   return m_value;
}

ostream& operator<<(ostream& ostr,const Int& RO) {
   //ostr << RO.get();
   //return ostr;
   return RO.print(ostr);
}
istream& operator>>(istream& istr, Int& RO) {
   return RO.read(istr);
}

int main() {
   Int i = 10;
   cout << "Please enter an integer: ";
   cin >> i;
   cout << "The number you entered is: " <<  i << endl;
   return 0;
}