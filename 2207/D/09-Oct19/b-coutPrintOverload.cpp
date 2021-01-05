#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   int contentSum = 0;
   int res;
   Container D("D", 120, 150), E("E", 200, 250);
   cout << D << endl << E << endl;

   res = contentSum += D;
   res = contentSum += E;
   cout << "The sum of the content if the following " << endl;
   cout << D << endl << E << endl;
   cout << "is " << contentSum << endl;
   cout << "res is  " << res << endl;
   if (D > E) {
      cout << D << " is fuller!" << endl;
   }
   else {
      cout << E << " is fullter!" << endl;
   }
   return 0;
}