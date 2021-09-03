#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "myIO.h"
using namespace std;
namespace sdds {
   MyOutput mout;
   MyInput min;
   MyOutput& MyOutput::width(int val) {
      if (val < 1) val = 1;
      m_width = val;
      return *this;
   }
   MyOutput& MyOutput::operator<<(const char* str) {
      printf("%*s",m_width, str);
      m_width = 1;
      return *this;
   }

   MyOutput& MyOutput::operator<<(int val) {
      printf("%*d",m_width,  val);
      m_width = 1;
      return *this;
   }

   MyOutput& MyOutput::operator<<(double val) {
      printf("%*.2lf",m_width, val);
      m_width = 1;
      return *this;
   }

   MyInput& MyInput::operator>> (char* str) {
      scanf("%s", str);
      return *this;
   }

   MyInput& MyInput::operator >> (int& val) {
      scanf("%d", &val);
      return *this;
   }

   MyInput& MyInput::operator >> (double& val) {
      scanf("%lf", &val);
      return *this;
   }

}
