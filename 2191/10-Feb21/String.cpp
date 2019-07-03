#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "String.h"

namespace sict {

  String::String() {
    m_data = new char[1];
    m_size = 0;
    m_data[0] = '\0';// empty cstring
  }
  String::String(const char* cstring) {
    std::cout << "Create String" << std::endl;
    m_data = nullptr;
    set(cstring);
  }
  String::String(const String& S) {
    m_data = nullptr;
    set(S.m_data);
  }
  String::~String() {
    std::cout << "Removing String" << std::endl;
    delete[] m_data;
  }
  std::ostream& String::display(std::ostream& OS)const {
    return OS << m_data;
  }
  std::istream& String::read(std::istream& is) {
    char buffer[4096];
    is.get(buffer, 4095, '\n');
    is.ignore(1000, '\n');
    set(buffer);
    return is;
  }
  int String::size()const {
    return m_size;
  }
  void String::set(const char* cstring) {
    delete[] m_data;
    m_size = strlen(cstring);
    m_data = new char[m_size + 1];
    strcpy(m_data, cstring);
  }
  void String::set(const String& S) {
    set(S.m_data);
  }
  String& String::append(const char* cstring) {
    char* old_data = m_data;
    m_data = new char[(m_size += strlen(cstring)) + 1];
    strcpy(m_data, old_data);
    strcat(m_data, cstring);
    delete[] old_data;
    return *this;
  }
  String& String::append(const String& S) {
    return append(S.m_data);
  }
  // operator overloads
  String& String::operator=(const char* RO_cstring) {
     std::cout << "Assigning String" << std::endl;
    set(RO_cstring);
    return *this;
  }
  String& String::operator=(const String& RO_String) {
    if (this != &RO_String) {
      std::cout << "Assigning String" << std::endl;
      set(RO_String.m_data);
    }
    return *this;
  }
  String& String::addSpaceAfter() {
    return append(" ");
  }
  String& String::addSpaceBefore() {
    String temp(" ");
    temp.append(*this);
    return *this = temp;
  }
  int String::compare(const String& RS)const {
    return strcmp(m_data, RS.m_data);
  }
  bool String::operator>(const String& RO_String)const {
    return compare(RO_String) > 0;
  }
  // helpers functions
  std::ostream& operator<<(std::ostream& LO_cout, const String& RO_String) {
    return RO_String.display(LO_cout);
  }
  std::istream& operator>>(std::istream& LO_cin, String& RO_String) {
    return RO_String.read(LO_cin);
  }


}