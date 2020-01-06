#include <iostream>
using namespace std;
class DynNum {
   int* m_valPtr;
public:
   DynNum();
   DynNum(int value);
   DynNum(const DynNum& DN);
//   DynNum& operator=(const DynNum& DN) = delete; //prevent assignment
   DynNum& operator=(const DynNum& DN);
   DynNum& operator++();
   DynNum operator++(int);
   std::ostream& show(std::ostream& os = std::cout)const;
   //std::istream& read(std::istream& input = cin);
   friend istream& operator>>(istream& is, DynNum& RO);
   ~DynNum();
};
DynNum& DynNum::operator++() {
   (*m_valPtr) += 1;
   return *this;
}
DynNum DynNum::operator++(int) {
   DynNum beforePlusPlus = *this;
   (*m_valPtr) += 1;
   return beforePlusPlus;
}

ostream& DynNum::show(ostream& os)const {
   return os << *m_valPtr;
}
//std::istream& DynNum::read(std::istream& input ) {
//   return input >> *m_valPtr;
//}
DynNum::DynNum() {
   m_valPtr = new int;
}
DynNum::DynNum(int value) {
   m_valPtr = new int;
   *m_valPtr = value;
}
DynNum::DynNum(const DynNum& DN) {
   m_valPtr = new int;
   *m_valPtr = *DN.m_valPtr;
}
DynNum& DynNum::operator=(const DynNum& DN) {
   if (this != &DN) { // prevent self assignment
      delete m_valPtr; // free the already existing resource
      m_valPtr = new int;
      *m_valPtr = *DN.m_valPtr;
   }
   return *this;
}
DynNum::~DynNum() {
   delete m_valPtr;
}

ostream& operator<<(ostream& os, const DynNum& B) {
   return B.show(os);
}
// bad way, using friends
istream& operator>>(istream& is, DynNum& RO) {
   return is >> *RO.m_valPtr;
}
// Good way, using member functions
/**
istream& operator>>(istream& is, DynNum& RO) {
   return RO.read(is);
}
*/
int main() {
   DynNum A;
   DynNum B = 30; // one argument constructor and NOT operator=()
   DynNum C(B);
   A = B;  // A.operator=(B);
   C = C;
   cout << "The Value of B is " << B << endl;
   //cout << "Enter an integer number: ";
   //cin >> A;
   //cout << "The number entered is: " << A << endl;
   B = ++A;
   cout << "Added one: " << A << endl;
   cout << "Added one in B = ++A: " << B << endl;
   B = A++;
   cout << "Added one: " << A << endl;
   cout << "Added one in B = A++: " << B << endl;
   return 0;
}