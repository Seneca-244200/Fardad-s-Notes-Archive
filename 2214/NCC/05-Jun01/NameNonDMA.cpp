#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;

namespace sdds {
   void Name::set(const char* fn, const char* ln) {
      strncpy(m_first, fn, 20);
      m_first[20] = 0;
      strncpy(m_last, ln, 40);
      m_last[40] = 0;
   }
   void Name::print() {
      cout << m_first << " " << m_last << endl;
   }
}
