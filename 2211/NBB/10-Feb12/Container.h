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
   int getContent()const;
   Container& operator+=(int value);

   Container operator+(const Container& rightOper)const; //const makes the left operand read onlye

   operator int()const;
   operator double() const;

   bool operator!()const;

   Container& operator++();
   Container operator++(int); // int means only postfix and is not an argument

   friend Container operator-(const Container& left, const Container& right);
};

int operator+=(int& leftOper, const Container& rightOper);
Container operator-(const Container& left, const Container& right);
#endif