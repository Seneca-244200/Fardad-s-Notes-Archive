#include <iostream>
using namespace std;
void bar(char fill, int length) {
   cout << "|" << length;
   for (int i = 0; i < length; cout << fill, i++);
  /* int i = 0;
   while (i < length) {
      cout << fill; i++;
   }*/

   cout << endl;
}