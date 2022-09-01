#include <iostream>
#include "ResizableDblArray.h"
using namespace std;
using namespace sdds;


int main() {
   ResizableDblArray RA(2);
   int i;
   for (i = 0; i < RA.size(); i++) {
      RA[i] = (i + 1) * 1.1;
   }


   RA[20] = 23.4;
   for (i = 0; i < RA.size(); i++) {
      cout << RA[i] << " " << endl;
   }
   RA.resize(2);
   for (i = 0; i < RA.size(); i++) {
      cout << RA[i] << " " << endl;
   }



   return 0;
}










