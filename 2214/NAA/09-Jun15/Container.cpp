#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "utils.h"
#include "Container.h"
using namespace std;
namespace sdds {
   void Container::setSafeEmpty() {
      m_value = -1;
      m_content[0] = 0;
   }
   Container::Container() {
      m_content[0] = 0;
      m_value = 0.0;
   }
   Container::Container(const char* content, double value) {
      set(content, value);
   }
   Container& Container::set(const char* content, double value) {
      if (content && value >= 0.0) {
         strcpy(m_content, content);
         m_value = value;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }
   bool Container::isSafeEmpty() const {
      return m_value < 0;
   }
   bool Container::operator!() const {
      return isSafeEmpty();
   }
   ostream& Container::print(ostream& os)const {// don't ask why, trust me for future
      if (!isSafeEmpty()) {
         os << m_value << " CCs of " << m_content ;
      }
      else {
         os << "Invalid Container";
      }
      return os;
   }

   Container Container::operator+(const Container& Ro) const {
      Container theSum;
      if (!Ro.isSafeEmpty()) {
         char mixed[81];
         if (strcmp(m_content, Ro.m_content) == 0)
            theSum.set(m_content, m_value + Ro.m_value);
         else {
            strcpy(mixed, m_content);
            strcat(mixed, " and ");
            strcat(mixed, Ro.m_content);
            theSum.set(mixed, m_value + Ro.m_value);
         }
      }
      return theSum;
   }

   Container& Container::set(double value) {
      if (value < 0) {
         setSafeEmpty();
      }
      else {
         m_value = value;
      }
      return *this;
   }

   Container& Container::operator=(double value) {
      set(value);
      return *this;
   }

   Container& Container::operator=(const char* content) {
      if (content) {
         strcpy(m_content, content);
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }

   Container& Container::operator+=(double value) {
      if (!isSafeEmpty()) {
         m_value += value;
      }
      return *this;
   }
   Container& Container::operator++() {
      if (!isSafeEmpty()) {
         m_value++;
      }
      return *this;
   }
   Container Container::operator++(int) {
      Container old = *this;  // you have to fake the ++ happening after
      if (!isSafeEmpty()) {
         m_value++;
      }
      return old;
   }
   std::ostream& operator<<(std::ostream& os, const Container& cnt) {
      return cnt.print(os);
   }
}