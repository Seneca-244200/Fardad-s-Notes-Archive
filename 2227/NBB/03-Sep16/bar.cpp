#include <iostream>
#include "bar.h"
using namespace std;
namespace sdds {
   void bar(char fill, int length) { // bar_char_int
      int i;
      for (i = 0, cout << "|" << length; i < length; cout << fill, i++);
      cout << endl;
   }

   void bar(int length) {  // bar_int
      bar('=', length);
   }
}