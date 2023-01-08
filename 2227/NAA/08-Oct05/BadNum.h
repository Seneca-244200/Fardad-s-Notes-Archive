#include <iostream>
#ifndef SDDS_NUM_H_
#define SDDS_NUM_H_
namespace sdds {
   class Num {
      int m_value;
   public:
      Num(int value = 0);
      Num operator+(int rightOperand)const;
      Num& operator+=(int rightOperand);
      void operator>>(int& rightOperand)const;


      std::ostream& display(
         std::ostream& coutRef = std::cout)const;
      friend    Num operator+(int leftOperand, const Num& rightOperand);
   };
   // helper funcs and operator overloads
   Num operator+(int leftOperand, const Num& rightOperand);
}
#endif // !SDDS_NUM_H_

