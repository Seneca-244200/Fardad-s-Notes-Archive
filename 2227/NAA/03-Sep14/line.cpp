#include <iostream>
#include "line.h"
using namespace std;
namespace sdds {
   void line(char fill, int length) { // line_char_int
      for (int i = 0; i < length; cout << fill, i++);
      cout << endl;
   }
   void line(int length) { // line_int
      line('_', length);
   }
   //void line(char fill) {  // line_char
   //   line(fill, 79);
   //}
   //void line() {   // line
   //   line('=', 79);
   //}
}