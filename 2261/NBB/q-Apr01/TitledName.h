#pragma once
#include <iostream>
#include "Name.h"
class TitledName: public Name {
   char m_title[32]{};
public:
   TitledName(const char* title, const char* name);
   const char* get()const;
   std::istream& read(std::istream& istr=std::cin);
   std::ostream& print(std::ostream& ostr=std::cout)const;
};

