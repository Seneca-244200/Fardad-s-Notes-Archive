#pragma once
#include <iostream>
// is an abstract base class
class Readable {
public:
   virtual std::istream& read(std::istream& istr) = 0;
};
std::istream& operator>>(std::istream& istr, Readable& N);

