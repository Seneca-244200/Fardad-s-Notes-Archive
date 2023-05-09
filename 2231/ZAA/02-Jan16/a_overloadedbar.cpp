#include <iostream>
#include "bar.h"
using namespace std;
namespace sdds {
   /*
   for(A;B;C){
      D;
   }
   A;
   while(B){
       D;
       C;
   }
   */
   void bar(char fill, int len) {
      int i;
      for (i = 0; i < len; i++) {
         cout << fill;
      }
      cout << endl;
   }
   void bar(char fill) {
      bar(fill, 70);
   }
   void bar() {
      bar('=', 70);
   }

}