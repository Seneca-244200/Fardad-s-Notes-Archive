#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   int contentSum = 0;
   int res;
   Container D("D", 120, 150), E("E", 200, 250);
   D.display() << endl;
   E.display() << endl;
   res = contentSum += D;
   res = contentSum += E;
   cout << "The sum of the content if the following " << endl;
   D.display() << endl;
   E.display() << endl;
   cout << "is " << contentSum << endl;
   cout << "res is  " << res << endl;
   if (D > E) {
      D.display() << " is fuller!" << endl;
   }
   else {
      E.display() << " is fullter!" << endl;
   }
   return 0;
}