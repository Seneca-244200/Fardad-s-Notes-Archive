#pragma once
#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds {
   class Container {
      int m_content;
      int m_capacity;  
      void correctContentValue();
   public:
      Container(int capacity = 250, int content = 0);
      std::ostream& display()const;
      Container& operator+=(int RightOperandAsValue);
      Container& operator+=(Container& RightOperand);
      Container& operator=(const Container& RightOperand);
      bool operator!()const;
      Container& operator++(); // pre
      Container& operator--(); // pre
      Container& operator++(int); // post
      Container operator--(int); // post
      operator int()const;
      operator bool()const;
   };
}

#endif // !SDDS_CONTAINER_H


