#pragma once
#ifndef SENECA_STRING_H
#define SENECA_STRING_H
#include <iostream>
namespace seneca {
   class String {
      char m_data[4096];
   public:
      String();
      String(const char* data);

      String operator+(const String& other)const;

      String& operator++();

      String& add(const char* cstr);
      String& add(const String& S);
      String& operator+=(const char* cstr);
      String& operator+=(const String& S);
      std::ostream& display(std::ostream& ostr = std::cout)const;
      std::istream& read(std::istream& istr = std::cin);
   };
}
#endif // !SENECA_STRING_H


