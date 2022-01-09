#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;

int main() {
   Cls A = "A in main";
   cout << A << endl;
   A = "Hello there!";// casts cosnt char* to Cls
         // therefore a nameless Cls is created out of the Cstring
   cout << A << endl;
   return 0;
}
