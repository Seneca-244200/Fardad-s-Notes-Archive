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
   Container& Container::set(const char* content,
         double volume) {
      //set(content);
      //set(volume);
      operator=(content);
//      operator=(volume);
      *this = volume;
      return *this;
   }
   //Container& Container::set(const char* content) {
   //   if (content && content[0]) {
   //      strcpy(m_content, content);
   //   }
   //   else {
   //      setSafeEmpty();
   //   }
   //   return *this;
   //}
   //Container& Container::set(double volume) {
   //   if (volume >= 0.0) {
   //      m_volume = volume;
   //   }
   //   else {
   //      setSafeEmpty();
   //   }
   //   return *this;
   //}
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
   ostream& Container::print() const {
      if (!isSafeEmpty()) {
         cout.setf(ios::fixed);
         cout.precision(2);
         cout << m_volume << " CCs of " << m_content;
         cout.unsetf(ios::fixed);
      }
      else {
         cout << "Invalid Container";
      }
      return cout;
   }
   //Container Container::sum(const Container& Ro) const {
   //   Container theSum;
   //   if (!isSafeEmpty() && !Ro.isSafeEmpty()) {
   //      if (strcmp(m_content, Ro.m_content) == 0) {
   //         theSum.set(m_content, m_volume + Ro.m_volume);
   //      }
   //      else {
   //         char mix[81] = "Mix of ";
   //         strcat(mix, m_content);
   //         strcat(mix, " and ");
   //         strcat(mix, Ro.m_content);
   //         theSum.set(mix, m_volume + Ro.m_volume);
   //      }
   //   }
   //   return theSum;
   //}
   Container Container::operator+(const Container& Ro) const {
      // *this is the left operand
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
      // *this is the left hand operand
      if (value >= 0.0) {
         m_volume += value;
      }
      else {
         setSafeEmpty();
      }
      return *this;
   }
}