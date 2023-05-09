#include <iostream>
#include "b-overloadedLine.h"
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
   void line(char fill, unsigned int len) {
      //for (; len; cout << fill, len--);
      //while (len) {
      //   cout << fill;
      //   len--;
      //}
      unsigned int i;
      for (i = 0; i < len; i++) {
         cout << fill;
      }
      cout << endl;
   }

   void line(char fill){
      line(fill, 79);
   }

   void line() {
      line('=');
   }
   void line(unsigned int len) {
      line('=', len);
   }











}
