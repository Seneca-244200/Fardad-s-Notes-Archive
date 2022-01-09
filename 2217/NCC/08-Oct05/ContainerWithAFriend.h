#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H

//#define SDDS_SHOW_LIFETIME

#include <iostream>

namespace sdds {
   class Container {
      int m_value;
      int m_capacity = 0;
      void setSafe();
      void handleOverflow();
   public:
      Container(int value = 0, int capacity = 250);
      std::ostream& display(std::ostream& output = std::cout)const;
      std::istream& read(std::istream& input = std::cin);
      Container& operator+=(const Container& Ro);
      Container& operator=(const Container& Ro);
      Container operator+(const Container& Ro)const;
      Container& operator++();     // prefix
      Container operator++(int); // postfix
      operator int()const;
      operator bool()const;
      ~Container();
      friend Container operator+(int valueLeftOperand, const Container& RightOperand);
   };
   std::ostream& operator<<(std::ostream& ostrLeftOperand, const Container& RightOperand);
   std::istream& operator>>(std::istream& istrLeftOperand, Container& RightOperand);
   // D = 175 + C;
   Container operator+(int valueLeftOperand, const Container& RightOperand);
}
#endif // !SDDS_CONTAINER_H


