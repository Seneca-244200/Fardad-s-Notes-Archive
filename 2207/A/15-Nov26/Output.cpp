#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
#include "Output.h"
namespace sdds {
   Output fout;
   Output& Output::width(int value) {
      m_width = value;
      return *this;
   }
   Output& Output::operator<<(int a) {
      printf("%*d",m_width, a);
      m_width = 1;
      return *this;
   }
   Output& Output::operator<<(const char* Cstr) {
      printf("%*s", m_width, Cstr);
      m_width = 1;
      return *this;
   }
}