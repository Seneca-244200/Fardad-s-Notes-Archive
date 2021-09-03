#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "myIO.h"
using namespace std;
namespace sdds {
   MyInput min;
   MyOutput mout;
   MyOutput& MyOutput::width(int value) {
      if (value > 1) {
         m_width = value;
      }
      else {
         m_width = 1;
      }
      return *this;
   }
   MyOutput& MyOutput::precision(int value) {
      if (value >= 0) {
         m_precision = value;
      }
      else {
         m_precision = 3;
      }
      return *this;
   }
   MyOutput& MyOutput::operator<<(const char* str) {
      printf("%*s",m_width, str);
      m_width = 1;
      return *this;
   }
   MyOutput& MyOutput::operator<<(int value) {
      printf("%*d", m_width, value);
      m_width = 1;
      return *this;
   }
   MyOutput& MyOutput::operator<<(double value) {
      printf("%*.*lf", m_width,m_precision, value);
      m_width = 1;
      return *this;
   }
   MyInput& MyInput::operator>>(char* str) {
      scanf("%s", str);
      return *this;
   }
   MyInput& MyInput::operator>>(int& value) {
      scanf("%d", &value);
      return *this;
   }
   MyInput& MyInput::operator>>(double& value) {
      scanf("%lf", &value);
      return *this;
   }
}
