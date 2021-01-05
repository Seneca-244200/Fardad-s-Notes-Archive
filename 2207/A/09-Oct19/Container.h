#pragma once
#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds {
   class Container {
      char m_name[31];
      int m_content;
      int m_capacity;  
      void correctValues();
   public:
      Container(const char* name="",  int content = 0, int capacity = 250);
      std::ostream& display()const;
      std::istream& read();
      Container& operator+=(int RightOperand);
      Container& operator=(const Container& RightOperand);
      Container operator+(const Container& RightOperand)const;
      Container& operator++();
      Container& operator++(int);
      Container operator--(int);
      bool operator!()const;
      operator int()const;
      operator bool()const;
      friend double operator+=(double& leftOp, const Container& rightOp);
      ~Container();
   };
   int operator+=(int& leftOp, const Container& rightOper);
   double operator+=(double& leftOp, const Container& rightOp);
   std::ostream& operator<<(std::ostream& ostr, const Container& rightOp);
   std::istream& operator>>(std::istream& istr, Container& rightOp);
}

#endif // !SDDS_CONTAINER_H


