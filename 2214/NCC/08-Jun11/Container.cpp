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
   Container& Container::set(const char* cnt, double v) {
      operator=(v);
//      operator=(cnt);
      *this = cnt;
      return *this;
   }
 /*  Container& Container::set(double v) {
      if (v >= 0.0) {
         m_volume = v;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }
   Container& Container::set(const char* cnt) {
      if (cnt && cnt[0]) {
         strcpy(m_content, cnt);
      }
      else {
         setSafeEmpty();
      }
      return *this;
   } */ 
  
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
   ostream& Container::display()const {
      if (isSafeEmpty()) {
         cout << "Invalid Container";
      }
      else {
         cout.setf(ios::fixed);
         cout.precision(2);
         cout << m_volume << " CCs of " << m_content;
         cout.unsetf(ios::fixed);
      }
      return cout;
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

   //Container Container::sum(const Container& Ro) const {
   //   Container theSum;
   //   if (!isSafeEmpty() && !Ro.isSafeEmpty()) {
   //      if (strcmp(m_content, Ro.m_content) == 0) {
   //         theSum.set(m_content, m_volume + Ro.m_volume);
   //      }
   //      else { // mix of two different things
   //         char mix[81] = "mix of ";
   //         strcat(mix, m_content);
   //         strcat(mix, " and ");
   //         strcat(mix, Ro.m_content);
   //         theSum.set(mix, m_volume + Ro.m_volume);
   //      }
   //   }
   //   return theSum;
   //}
   //Container& Container::add(double value) {
   //   if (value >= 0.0) {
   //      m_volume += value;
   //   }
   //   else {
   //      setSafeEmpty();
   //   }
   //   return *this;
   //}
   Container& Container::operator+=(double value) {
      if (value >= 0.0) {
         m_volume += value;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }
}