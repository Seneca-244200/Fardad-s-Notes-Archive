#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "utils.h"
#include "Container.h"
using namespace std;
namespace sdds {
   Container::Container() {
      m_content[0] = 0;
      m_value = 0.0;
   }
   Container& Container::set(const char* content, double value) {
      strcpy(m_content, content);
      m_value = value;
      return *this;
   }
   const Container& Container::print()const {
      cout << m_value << " CCs of " << m_content << endl;
      return *this;
   }

   Container Container::sum(const Container& Ro) const {
      Container theSum;
      char mixed[81];
      if (strcmp(m_content, Ro.m_content) == 0)
         theSum.set(m_content, m_value + Ro.m_value);
      else {
         strcpy(mixed, m_content);
         strcat(mixed, " and ");
         strcat(mixed, Ro.m_content);
         theSum.set(mixed, m_value + Ro.m_value);
      }
      return theSum;
   }

   Container Container::operator+(const Container& Ro) const {
      Container theSum;
      char mixed[81];
      if (strcmp(m_content, Ro.m_content) == 0)
         theSum.set(m_content, m_value + Ro.m_value);
      else {
         strcpy(mixed, m_content);
         strcat(mixed, " and ");
         strcat(mixed, Ro.m_content);
         theSum.set(mixed, m_value + Ro.m_value);
      }
      return theSum;
   }

   Container& Container::set(double value) {
      m_value = value;
      return *this;
   }

   Container& Container::operator=(double value) {
      m_value = value;
      return *this;
   }

   Container& Container::operator=(const char* content) {
      strcpy(m_content, content);
      return *this;
   }

   Container& Container::operator+=(double value) {
      m_value += value;
      return *this;
   }
}