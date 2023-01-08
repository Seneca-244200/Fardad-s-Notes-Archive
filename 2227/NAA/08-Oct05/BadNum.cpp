#include <iostream>
#include "Num.h"
using namespace std;
namespace sdds {
   Num::Num(int value) {
      m_value = value;
   }

   //Num Num::operator+(int value) const {
   //   Num ret(m_value + value);
   //   return ret;
   //}
   Num Num::operator+(int value) const {
      return Num(m_value + value);
   }
   //Num Num::operator+(int value) const {
   //   Num ret = *this;
   //   return ret += value;
   //}

   Num& Num::operator+=(int value)
   {
      m_value += value;
      return *this;
   }

   void Num::operator>>(int& value) const {
      value = m_value;
   }

   ostream& Num::display(ostream& coutRef)const {
      cout << m_value;
      return coutRef;
   }
   Num operator+(int leftOperand, const Num& rightOperand){
      return Num(leftOperand + rightOperand.m_value);
   }
}