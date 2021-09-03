#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "utils.h"
#include "Container.h"
using namespace std;
namespace sdds {
   Container::Container() {
      setSafeEmpty();
   }
   bool Container::isSafeEmpty()const {
      return m_volume < 0;
   }
   bool Container::operator!()const {
      return isSafeEmpty();
   }
   Container& Container::operator++() {
      if (!isSafeEmpty()) {
         m_volume += 1.0;
      }
      return *this;
   }
   Container Container::operator++(int) {
      Container old = *this;
      if (!isSafeEmpty()) {
         m_volume += 1.0;
      }
      return old;
   }
   std::istream& Container::read(std::istream& is) {
      char content[81];
      double value;
      cout << "Content: ";
      is.getline(content, 81);
      cout << "Value: ";
      cin >> value;
      set(content, value);
      return is;
   }
   Container& Container::set(const char* cnt, double v) {
      operator=(v);
      *this = cnt;
      return *this;
   }
   Container::Container(const char* content,
      double volume) {
      set(content, volume);
   }

   Container& Container::operator=(double v) {
      if (v >= 0.0) {
         m_volume = v;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }
   Container& Container::operator=(const char* cnt) {
      if (cnt && cnt[0]) {
         strcpy(m_content, cnt);
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }
   Container& Container::setSafeEmpty() {
      m_content[0] = 0;
      m_volume = -1.0;
      return *this;
   }

   Container Container::operator+(const Container& Ro) const {
      Container theSum;
      if (!isSafeEmpty() && !Ro.isSafeEmpty()) {
         if (strcmp(m_content, Ro.m_content) == 0) {
            theSum.set(m_content, m_volume + Ro.m_volume);
         }
         else { // mix of two different things
            char mix[81] = "mix of ";
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
   Container::operator const char* () const {
      return m_content;
   }
   Container::operator double() const {
      return m_volume;
   }
   Container::operator bool() const {
      return !isSafeEmpty();
   }
   ostream& Container::display(ostream& os)const {
      if (isSafeEmpty()) {
         os << "Invalid Container";
      }
      else {
         os.setf(ios::fixed);
         os.precision(2);
         os << m_volume << " CC(s) of " << m_content;
         os.unsetf(ios::fixed);
      }
      return os;
   }
   std::ostream& operator<<(std::ostream& os, const Container& cnt) {
      return cnt.display(os);
   }
   std::istream& operator>>(std::istream& is, Container& cnt) {
      return cnt.read(is);
   }

}