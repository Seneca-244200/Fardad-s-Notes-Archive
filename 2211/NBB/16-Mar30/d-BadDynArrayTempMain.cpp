
#include <iostream>
#include "BadDynArray.h"
using namespace std;
/*
To convert the class to a template:
1 - add the template tag to all blocks involved with class
2 - change the focused type to the type template
3-  add the signature of the template (<place holder>) to all the class names except:
    A- The name of the class after the template
    A- Constructor names
    A- Destructor name


*/




int main() {
   unsigned int i;
   DynArray<double> I(3);
   for (i = 0; i < I.size(); i++) {
      I[i] = i + 20.12;
   }
   for (i = 0; i < 5; i++) {
      cout << I[i] << " ";
   }
   cout << endl;
   cout << I[1221323] << endl;
   return 0;
}