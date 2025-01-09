#include <iostream>
using namespace std;

class Container {
   int m_data;
public:
   Container(int data = 100) :m_data(data) {
   }
   int getValue()const {  // is a query  returns internal information out without changting them
      return m_data;
   }
   const int* getDataAddress() { // const pointers protect the target and make the target read only
      return &m_data;
   }

   istream& read(istream& istr) {
      istr >> m_data;
      return istr;
   }
   ostream& write(ostream& ostr)const {
      ostr << "Container with " << m_data << " as data!";
      return ostr;
   }
};
/*
ostream& operator << ostream & ostr, const WhatYouNeedToInsert& WYNTI){
   //using queries you insert the object's values into ostr

   return ostr;
}

*/

// class to be inserted
ostream& operator<<(ostream& ostr, const Container& C) {
   ostr << "Container with " << C.getValue() << " as data!";
   return ostr;
}
// class to be inserted
/*
ostream& operator<<(ostream& ostr, const Container& C) {
   C.write(ostr);
   return ostr;
}
*/
istream& operator>>(istream& istr, Container& C) {
   C.read(istr);

   return istr;
}



int main() {

   Container C;

   C = 12345;
   // C = Contaier(12345);

   cout << C.getValue() << endl;


   C = Container(int(234.56));

   cout << C << endl;

   cout << "Enter a Container value\n> ";
   cin >> C;
   cout << C << endl;

   return 0;
}

