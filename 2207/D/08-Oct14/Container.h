#pragma once
#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds {
   class Container {
      int m_content;
      int m_capacity;
      void correctContent();
   public:
      Container(int capacity = 250, int content = 0);
      std::ostream& display()const;
      Container& operator+=(int value);
      Container& operator=(const Container& RightOperand);
      Container operator+(const Container& RO)const;
      Container& operator~();
      Container& operator--();
      Container& operator++();
      Container operator++(int);
      Container& operator--(int);
      operator int()const;
      operator bool()const;

      bool operator!()const;
   };
}

#endif // !SDDS_CONTAINER_H


