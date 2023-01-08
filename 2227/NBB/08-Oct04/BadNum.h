#ifndef SDDS_NUM_H_
#define SDDS_NUM_H_
#include <iostream>
namespace sdds {
   class Num {
      int m_value;
   public:
      Num(int value = 0);
      Num operator+(int righOperand)const; 
      Num operator+(const Num& rightOperand)const;
      // const: to make sure it does not have side effect
      // it will not modify *this;
      std::ostream& display(std::ostream& coutRef = std::cout)const;
      // friend function don't make sense and they are bad bad
      // design.
      friend int operator-(int leftOperand, const Num& rightOperand);
   };
   int operator-(int leftOperand, const Num& rightOperand);
}
#endif // !SDDS_NUM_H_

