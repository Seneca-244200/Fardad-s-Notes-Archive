#pragma once
#include <iostream>
class Person {
   char* m_name;
public:
   Person(const char* name);
   std::ostream& introduce(std::ostream& ostr = std::cout)const;
   ~Person();
};

