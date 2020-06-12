#include <iostream>
using namespace std;
#include "DynArray.h"
/*
To convert the class to a template:
1 - add the template tag to all blocks involved with class
2-  add the signature of the template (<place holder>) to all the class names except:
    A- The name of the class after the template
    A- Constructor names
    A- Destructor name
*/


int main() {
   unsigned int i;
   DynArray<int> I(3);
   DynArray<double> D(4);
   for (i = 0; i < I.size(); i++) {
      I[i] = i + 20;
   }
   cout << I << endl;
   for (i = 0; i < D.size(); i++) {
      D[i] = i + 20.345;
   }
   cout << D << endl;

   return 0;
}