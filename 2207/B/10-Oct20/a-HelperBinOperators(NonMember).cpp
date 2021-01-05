#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   int contSum = 0;

   Container D("D", 120, 150);
   Container E("E", 220, 350);
   Container C;
   cin >> C;
   contSum += D;
   contSum += E;
   contSum += C;
   cout << "Sum of content is " << contSum << endl;
   cout << "Contaners are " << endl;
  /* D.display() << endl;
   E.display() << endl;
   C.display() << endl;*/
   cout << D << endl << E << endl << C << endl;
   return 0;
}