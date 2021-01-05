#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;
#include "Output.h"

namespace sdds {
   Output fout;
   Output& Output::operator<<(int a) {
      printf("%d", a);
      return *this;
   }
   Output& Output::operator<<(const char* Cstr) {
      printf(Cstr);
      return *this;
   }
}
