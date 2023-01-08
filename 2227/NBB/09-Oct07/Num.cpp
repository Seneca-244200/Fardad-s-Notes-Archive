#include <iostream>
#include "Num.h"
using namespace std;
namespace sdds {
   bool Num::isZero() const {
      return m_value == 0;
   }
   int Num::value() const { // const query
      return m_value;
   }
   Num::Num(int value) {
      m_value = value;
   }
   Num& Num::operator=(int rightOperand){
      m_value = rightOperand;
      return *this;
   }
   Num& Num::operator+=(int rightoperand){
      m_value += rightoperand;
      return *this;
   }
   Num Num::operator+(int righOperand) const {
      return Num(m_value + righOperand); // when returning objects by value
                                           // temp names objects are OK:
   }
   
   Num Num::operator+(const Num& rightOperand) const {
      return Num(m_value + rightOperand.m_value);
   }

   Num::operator int() const{
      return m_value;
   }

   Num::operator bool() const{
      return m_value > 0;
   }

   

   std::ostream& Num::operator~() const{
      return display();
   }

   std::ostream& Num::display(std::ostream& ostr) const
   {
      return ostr << int(*this);
   }

   Num& Num::operator++(){
      m_value++;
      return *this;
   }

   //Num Num::operator++(int){
   //   Num old = *this;
   //   m_value++;
   //   return old;
   //}
   Num Num::operator++(int){
      m_value++;
      return Num(m_value - 1);
   }


   Num operator+(int leftOperand, const Num& rightOperand){
      return Num(leftOperand + rightOperand.value());
   }

   std::ostream& operator<<(std::ostream& leftOperand, const Num& rightOperand){
      return rightOperand.display(leftOperand);
   }

}
