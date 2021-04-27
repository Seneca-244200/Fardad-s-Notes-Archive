#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>// strcpy and strlen
#include <string>
using namespace std;
#include "Name.h"
void Name::init() {
   m_data = nullptr;
}
Name::Name(){
   init();
}
Name::Name(const char* value):m_data(nullptr){ // initializing m_data
   // m_data = nullptr; // setting m_data
   set(value);
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
Name::Name(const Name& copyFrom):m_data(nullptr) {
   set(copyFrom.m_data);
}
Name& Name::operator=(const Name& copyFrom) {
   if (this != &copyFrom) {
      set(copyFrom.m_data);
   }
   return *this;
}
std::ostream& Name::display(std::ostream& ostr) const {
   if (m_data) {
      ostr << m_data;
   }
   return ostr;
}
std::istream& Name::read(std::istream& istr) {
   string theName; // C++ string
   getline(istr, theName);// helpter function for geting string from istrem with ANY size
   set(theName.c_str());
   return istr;
}

Name::~Name() {
   delete[] m_data;
}

istream& operator>>(istream& leftcin, Name& right) {
   return right.read(leftcin);
}

ostream& operator<<(ostream& leftcout, const Name& right) {
   return right.display(leftcout);
}
