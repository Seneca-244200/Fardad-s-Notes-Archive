#include <iostream>
#include "DynNum.h"
using namespace std;

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
   *m_valPtr = 0;
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
// a ?
// b = 2;
// c = 3;
// a = b + c;
// a = b.operator+(c);

DynNum DynNum::operator+(const DynNum& RO)const {
   DynNum temp(*(this->m_valPtr) + *RO.m_valPtr);
   return temp;
}
DynNum::~DynNum() {
   delete m_valPtr;
}
int DynNum::value()const {
   return *m_valPtr;
}
DynNum::operator int()const {
   return *m_valPtr;
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

//DynNum operator+(int LO, const DynNum& RO) {
//   DynNum temp(LO + RO.value());
//   return temp;
//}

DynNum operator+(int LO, const DynNum& RO) {
   DynNum temp(LO + int(RO));
   return temp;
}