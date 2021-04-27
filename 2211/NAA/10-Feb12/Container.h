#pragma once
#ifndef SDDS_CONTAINER_H
#define SDDS_CONTAINER_H
#include <iostream>
class Container {
   int m_content;
   int m_capacity;
public:
   Container(int capacity = 250, int content = 0);
   std::ostream& display(std::ostream& os = std::cout)const;
   Container& addTo(int value);
   Container& operator+=(int value);
   int getContent()const;
   operator double() const;
   operator int()const;
   Container operator+(const Container& rightOper)const; // left operand is read only too
   friend Container operator-(const Container& left, const Container& right);
   bool operator!()const;
   Container& operator++();
   Container operator++(int); // this one is postfix
};

int operator+=(int& leftOper, const Container& rightOper);
Container operator-(const Container& left, const Container& right);

#endif