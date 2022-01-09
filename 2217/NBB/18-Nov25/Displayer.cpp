#include <iostream>
using namespace std;
/*
* To Convert a regular class to a class template
1 - add the template tag to all blocks
    involved with class
2 - change the focused double to the double template
3-  add the signature of the template (<place holder>)
    to all the class names except:
    A- The name of the class after the template tag
    B- Constructor names
    C- Destructor name
*/

class Displayer {
   double m_data{};
public:
   Displayer() {
   }
   Displayer(double data);
   ostream& show(ostream& ostr)const {
      return ostr << m_data;
   }
   Displayer& operator=(double data);
   istream& read(istream& istr) {
      return istr >> m_data;
   }
   virtual ~Displayer() {
   }
};

Displayer::Displayer(double data) {
   m_data = data;
}


Displayer& Displayer::operator=(double data) {
   m_data = data;
   return *this;
}
ostream& operator<<(ostream& ostr, const Displayer& ro) {
   return ro.show(ostr);
}
istream& operator>>(istream& istr, Displayer& ro) {
   return ro.read(istr);
}



int main() {
   Displayer A, B = 300.1234;
   cout << A << endl << B << endl;
   cout << "double value: ";
   cin >> A;
   cout << A << endl;
   return 0;
}