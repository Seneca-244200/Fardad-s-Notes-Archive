#ifndef SDDS_NUM_H_
#define SDDS_NUM_H_
#include <iostream>
namespace sdds {
   class Num {
      int m_value;
   public:
      bool isZero()const;
      int value()const;
      Num(int value = 0);
      Num& operator=(int rightOperand);
      Num& operator+=(int rightoperand); // has sideffect
      Num operator+(int righOperand)const; 
      Num operator+(const Num& rightOperand)const;
      operator int()const;
      operator bool()const;
      // const: to make sure it does not have side effect
      // it will not modify *this;
      std::ostream& operator~()const;
      std::ostream& display(std::ostream& ostr = std::cout)const;
      Num& operator++(); // prefix
      Num operator++(int); // postfix
   };
   Num operator+(int leftOperand, const Num& rightOperand);
   std::ostream& operator<<(std::ostream& leftOperand, const Num& rightOperand);
}
#endif // !SDDS_NUM_H_

