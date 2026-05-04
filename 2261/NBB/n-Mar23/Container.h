#pragma once
#include <iostream>
class Container {
   int m_value{};
public:
   int value() const;
   Container() = default;
   Container(int value);
   Container operator+(const Container& other)const;

};
std::ostream& operator<< (std::ostream& ostr, const Container& C);