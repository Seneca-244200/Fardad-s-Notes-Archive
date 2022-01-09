#include <iostream>
using namespace std;
/*
* To Convert a regular class to a class template
1 - add the template tag to all blocks
    involved with class
2 - change the focused type to the type template
3-  add the signature of the template (<place holder>)
    to all the class names except:
    A- The name of the class after the template tag
    B- Constructor names
    C- Destructor name
*/
template <typename type>
class Displayer {
   type m_data{};
public:
   Displayer() {
   }
   Displayer(type data);
   ostream& show(ostream& ostr)const {
      return ostr << m_data;
   }
   Displayer<type>& operator=(type data);
   istream& read(istream& istr) {
      return istr >> m_data;
   }
   virtual ~Displayer() {
   }
};

template <typename type>
Displayer<type>::Displayer(type data) {
   m_data = data;
}

template <typename type>
Displayer<type>& Displayer<type>::operator=(type data) {
   m_data = data;
   return *this;
}
template <class type>  // class is the same as typename here
ostream& operator<<(ostream& ostr, const Displayer<type>& ro) {
   return ro.show(ostr);
}
template <typename type>
istream& operator>>(istream& istr, Displayer<type>& ro) {
   return ro.read(istr);
}



int main() {
   Displayer<int> D, E = 300;
   Displayer<double> A, B = 300.1234;
   cout << D << endl;
   cout << E << endl;
   cout << "Value: ";
   cin >> D;
   cout << "The value is: " << D << endl;
   cout << A << endl << B << endl;
   cout << "double value: ";
   cin >> A;
   cout << A << endl;
   return 0;
}