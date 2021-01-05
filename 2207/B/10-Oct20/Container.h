#pragma once
#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
namespace sdds {
   class Container {
      char m_name[31];
      int m_content;
      int m_capacity;  
      Container& correctValues();
   public:
      Container(const char* name="",  int content = 0, int capacity = 250);
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
      Container& operator+=(int RightOperand);
      Container& operator=(const Container& RightOperand);
      Container operator+(const Container& RightOperand)const;
      Container& operator++();
      Container& operator++(int);
      Container operator--(int);
      bool operator!()const;
      operator int()const;
      operator bool()const;
      ~Container();

      friend double operator<<(double& D, const Container& Ro);

   };
   int operator+=(int& cumOfContent, const Container& rightOper);
   std::ostream& operator<<(std::ostream& ostr, const Container& rightOper);
   std::istream& operator>>(std::istream& istr, Container& rightOper);
   /// -------------------------------------------------
   double operator<<(double& D, const Container& Ro);





}

#endif // !SDDS_CONTAINER_H


