#include <iostream>
#include "bar.h"
using namespace std;
namespace sdds {
   void bar(char fill, int len) {
      int i;
      for (i = 0; i < len; i++) {
         cout << fill;
      }
      cout << endl;
   }

}