#include <iostream>
#include "Scope.h"
using namespace std;

namespace sdds {
   int myGlobalVar = 35; // to be made global in the headerfile (look at the headerfile content)
   int myvalue = 20;  // file scope




   void foo() {
      cout << "Fooing here!" << endl;
      cout << myvalue << endl;
   }


   void Record::print() {
      cout << title << ": " << num << endl;
      cout << myvalue << endl;
   }






}