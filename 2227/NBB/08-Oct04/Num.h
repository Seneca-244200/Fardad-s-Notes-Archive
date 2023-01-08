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
      Num operator+(int righOperand)const; 
      Num operator+(const Num& rightOperand)const;
      bool operator!()const;  // *this becomes the operator (prefix)
      Num& operator++();
      Num& operator--();

      Num operator++(int); // int is not an argument
      Num& operator--(int); //it is flag to indicate ++ is postfixt
      // const: to make sure it does not have side effect
      // it will not modify *this;
      std::ostream& display(std::ostream& coutRef = std::cout)const;
   };
   int operator-(int leftOperand, const Num& rightOperand);
   std::ostream& operator<<(std::ostream& leftOperand, const Num& rightOperand);
}
#endif // !SDDS_NUM_H_

