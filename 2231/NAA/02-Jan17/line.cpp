#include <iostream>
#include "line.h"// custom headers always after system
using namespace std;
namespace sdds {

   void line(char fill, unsigned int len) {

      unsigned int i;
      for (i = 0; i < len; i++) {
         cout << fill;
      }
      cout << endl;
   }
   void line(unsigned int len) {
      line('=', len);
   }











}
