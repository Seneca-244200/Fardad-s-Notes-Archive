#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H

//#define SDDS_LIFETIME

#include <iostream>
namespace sdds {
   class Container {
      int m_value;
      int m_capacity = 0;
      void setSafe();
      int handleOverflow();
   public:
      Container(int value = 0, int capacity = 250);

      Container& operator+=(const Container& Ro);
      Container& operator=(const Container& Ro);
      Container operator+(const Container& Ro)const;

      //bool operator!()const;
      Container& operator++();
      Container operator++(int);
      int getCapacity()const;
      operator int() const;
      // this makes operator! redundant
      operator bool()const;
      std::ostream& display(std::ostream& output = std::cout)const;
      std::istream& read(std::istream& input = std::cin);
      ~Container();
   };
   std::ostream& operator<<(std::ostream& leftOperand, const Container& RightOperand);
   std::istream& operator>>(std::istream& leftOperand, Container& RightOperand);
   Container operator+(int value, const Container& Ro);
   int operator~(const Container& Operand);
}
#endif // !SDDS_CONTAINER_H


