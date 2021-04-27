#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;
#include "NameNoResource.h"
void NameNoResource::init() {
   m_data[0] = 0; // empty Cstring
}

NameNoResource::NameNoResource() {
   init();
}

NameNoResource::NameNoResource(const char* value) {
   set(value);
}

NameNoResource& NameNoResource::set(const char* value) {
   strncpy(m_data, value, 50);
   m_data[50] = 0;
   return *this;
}

NameNoResource& NameNoResource::operator=(const char* value) {
   return set(value);
}

std::ostream& NameNoResource::display(std::ostream& ostr) const {
   return ostr << m_data ;
}

std::istream& NameNoResource::read(std::istream& istr)  {
   if (!istr.getline(m_data, 51, '\n')) {
      istr.clear();
      istr.ignore(1000, '\n');
   }
   return istr;
}

std::istream& operator>>(std::istream& istr, NameNoResource& righOper) {
   return righOper.read(istr);
}

std::ostream& operator<<(std::ostream& ostr, const NameNoResource& rightOper) {
   return rightOper.display(ostr);
}
