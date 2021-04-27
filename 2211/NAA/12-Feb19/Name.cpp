#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
#include "Name.h"
void Name::init() {
   m_data = nullptr; // empty Cstring
}

Name::Name() {
   init();
}

Name::Name(const char* value):m_data(nullptr){
   set(value);
}
Name::~Name() {
   delete[] m_data;
}
Name& Name::set(const char* value) {
   delete[] m_data;
   m_data = nullptr;
   if (value) {
      m_data = new char[strlen(value) + 1];
      strcpy(m_data, value);
   }
   return *this;
}

Name& Name::operator=(const char* value) {
   return set(value);
}

Name::Name(const Name& copy):m_data(nullptr) {
   operator=(copy);  // potato
//   *this = copy;      // potaato
}

std::ostream& Name::display(std::ostream& ostr) const {
   if(m_data) ostr << m_data ;
   return ostr;
}

Name& Name::operator=(const Name& righOper) {
   if (this != &righOper) { // preventing safe assignment
      set(righOper.m_data);
   }
   return *this;
}

std::istream& Name::read(std::istream& istr)  {
   string temp;  // C++ string
   getline(istr, temp); // helper getline funciotn for string
   set(temp.c_str());
   return istr;
}

std::istream& operator>>(std::istream& istr, Name& righOper) {
   return righOper.read(istr);
}

std::ostream& operator<<(std::ostream& ostr, const Name& rightOper) {
   return rightOper.display(ostr);
}
