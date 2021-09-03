#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "utils.h"
#include "Container.h"
using namespace std;
namespace sdds {
   Container& Container::setSafeEmpty() {
      m_content[0] = 0;
      m_volume = -1.0;
      return *this;
   }
   Container::Container() {
      setSafeEmpty();
   }
   bool Container::isSafeEmpty()const {
      return m_volume < 0;
   }
   bool Container::operator!()const {
      return isSafeEmpty();
   }
   Container::Container(const char* content,
      double volume) {
      set(content, volume);
   }
   Container& Container::set(const char* content,
         double volume) {
      operator=(content);
      *this = volume;
      return *this;
   }
   Container& Container::operator= (const char* content) {
      if (content && content[0]) {
         strcpy(m_content, content);
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }
   Container& Container::operator=(double volume) {
      if (volume >= 0.0) {
         m_volume = volume;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }
   ostream& Container::print(std::ostream& os) const {
      if (!isSafeEmpty()) {
         os.setf(ios::fixed);
         os.precision(2);
         os << m_volume << " CCs of " << m_content;
         os.unsetf(ios::fixed);
      }
      else {
         os << "Invalid Container";
      }
      return os;
   }

   Container Container::operator+(const Container& Ro) const {
      Container theSum;
      if (!isSafeEmpty() && !Ro.isSafeEmpty()) {
         if (strcmp(m_content, Ro.m_content) == 0) {
            theSum.set(m_content, m_volume + Ro.m_volume);
         }
         else {
            char mix[81] = "Mix of ";
            strcat(mix, m_content);
            strcat(mix, " and ");
            strcat(mix, Ro.m_content);
            theSum.set(mix, m_volume + Ro.m_volume);
         }
      }
      return theSum;
   }

   Container& Container::operator+=(double value) {

      if (value >= 0.0) {
         m_volume += value;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }
   Container& Container::operator++() {
      return operator+=(1.0);
   }
   Container Container::operator++(int) {
      Container old = *this;
      operator+=(1.0);
      return old;
   }
   Container::operator const char* ()const {
      return m_content;
   }
   Container::operator double()const {
      return m_volume;
   }
   Container::operator bool()const {
      return !isSafeEmpty();
   }

   bool Container::operator>(const Container& right) const {
      return m_volume > right.m_volume;
   }


   ostream& operator<<(ostream& os, const Container& cnt) {
      return cnt.print(os);
   }
   // this implementation needs a to be friend of the container
   //bool operator==(const Container& left, const Container& right) {
   //   bool res = false;
   //   if (left && right) {
   //      double dif = left.m_volume - right.m_volume;
   //      res = strcmp(left.m_content, right.m_content) == 0 && dif > -0.001 && dif < 0.001;
   //   }
   //   return res;
   //}
   bool operator==(const Container& left, const Container& right) {
      bool res = false;
      if (left && right) {
         double dif = (double)left - (double)right;
         res = strcmp(left, right) == 0 && dif > -0.001 && dif < 0.001;
      }
      return res;
   }

}