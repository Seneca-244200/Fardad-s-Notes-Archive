#include <iostream>
#include "Num.h"
using namespace std;
namespace sdds {

   Num::Num(int value) {
      m_value = value;
   }

   Num Num::operator+(int righOperand) const {
      return Num(m_value + righOperand); // when returning objects by value
                                         // temp names objects are OK:
   }

   Num Num::operator+(const Num& rightOperand) const {
      return Num(m_value + rightOperand.m_value);
   }

   ostream& Num::display(ostream& coutRef)const {
      cout << m_value;
      return coutRef;
   }
   int operator-(int leftOperand, const Num& rightOperand){
      return leftOperand - rightOperand;
   }
}
