#pragma once
#ifndef NAME_H__
#define NAME_H__
#include <iostream>
class NameNoResource {
   char m_data[51];
   void init();
public:
   NameNoResource();
   NameNoResource(const char* value);
   NameNoResource& set(const char* value);
   NameNoResource& operator=(const char* value);

   std::ostream& display(std::ostream& ostr = std::cout)const;
   std::istream& read(std::istream& istr = std::cin);

   ~NameNoResource() {
   }; // no need for now.
};

std::istream& operator>>(std::istream& istr, NameNoResource& righOper);
std::ostream& operator<<(std::ostream& ostr, const NameNoResource& rightOper);
#endif // !NAME_H__


