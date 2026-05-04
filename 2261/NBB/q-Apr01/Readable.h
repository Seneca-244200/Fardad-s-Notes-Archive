#pragma once
#include <iostream>
// is an abstract base class/
// class iRead
class Readable {
public:
   virtual std::istream& read(std::istream& istr) = 0;
   virtual ~Readable() = default;
};
std::istream& operator>>(std::istream& istr, Readable& N);

