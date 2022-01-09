#include <cstdio>
#include "Output.h"
namespace sdds {
   Output fout;
   Output& Output::width(int value) {
      m_width = value;
      return *this;
   }
   Output& Output::precision(int value) {
      m_precision = value;
      return *this;
   }
   Output& Output::operator<<(const char* Cstr) {
       printf("%*s",m_width, Cstr);
       m_width = 1;
       return *this;
    }
   Output& Output::operator<<(int value) {
      printf("%*d", m_width, value);
      m_width = 1;
      return *this;
   }
   Output& Output::operator<<(double value) {
      printf("%*.*lf", m_width, m_precision, value);
      m_width = 1;
      return *this;
   }
}
