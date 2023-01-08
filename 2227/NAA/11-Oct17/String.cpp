#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "String.h"
namespace sdds {

   std::ostream& operator<< (std::ostream& ostr, const String& S) {
      return S.display(ostr);
   }

   String operator+(const char* left, const String& right) {
      String L(left);
      L += (const char*)(right);
      return L;
   }


   String::String(const char* cStr){
      if (cStr) {
         m_data = new char[strlen(cStr) + 1];
         strcpy(m_data, cStr);
      }
      else {
         m_data = new char[1];
         *m_data = 0;
      }
   }

   String::~String() {
      delete[] m_data;
   }

   String::String(const String& toCopy)/* :m_data{nullptr}*/ {
      // make sure the data is null
      // m_data = nullptr
      // this makes sure that operator= will not fail deleting the data;
      operator=(toCopy);
   }

   String& String::operator=(const String& toCopy){
      if (this != &toCopy) {
         delete[] m_data;
         m_data = new char[strlen(toCopy.m_data) + 1];
         strcpy(m_data, toCopy.m_data);
      }
      return *this;
   }

   int String::length() const{
      return int(strlen(m_data));
   }

   std::ostream& String::display(std::ostream& ostr) const{
      return ostr << m_data;
   }

   String::operator int() const{
      return int(strlen(m_data));
   }

   String::operator const char* () const{
      return m_data;
   }

   String& String::operator++(){
      char* temp = new char[strlen(m_data) + 1 + 1];
      strcpy(temp, " ");
      strcat(temp, m_data);
      delete[] m_data;
      m_data = temp;
      return *this;
   }

   String& String::operator++(int) {
      char* temp = new char[strlen(m_data) + 1 + 1];
      strcpy(temp, m_data);
      strcat(temp, " ");
      delete[] m_data;
      m_data = temp;
      return *this;
   }

   String& String::operator+=(const char* cstr){
      if (cstr) {
         char* temp = new char[strlen(m_data) + strlen(cstr) + 1];
         strcpy(temp, m_data);
         strcat(temp, cstr);
         delete[] m_data;
         m_data = temp;
      }
      return *this;
   }

   char String::operator[](int index) const{
      return m_data[index % strlen(m_data)];
   }

}