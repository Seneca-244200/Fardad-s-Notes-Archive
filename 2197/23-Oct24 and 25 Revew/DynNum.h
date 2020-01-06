#ifndef SDDS_DYNNUM_H__
#define SDDS_DYNNUM_H__
#include <iostream>

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
   DynNum operator+(const DynNum & RO)const;
   int value()const;
   operator int()const;
   std::ostream& show(std::ostream& os = std::cout)const;
   //std::istream& read(std::istream& input = cin);
   friend std::istream& operator>>(std::istream& is, DynNum& RO);
   ~DynNum();
};
std::ostream& operator<<(std::ostream& os, const DynNum& B);
// bad way, using friends
std::istream& operator>>(std::istream& is, DynNum& RO);
DynNum operator+(int LO, const DynNum& RO);
#endif
