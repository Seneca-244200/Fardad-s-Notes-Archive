#include <iostream>
#include "String.h"
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container A, B, C;
   int value;
   double full;
   if (!A) {
      cout << "In safe emtpry state" << endl;
   }
   C = Container(500);
   C.display() << endl;
   value = int(C);
   full = double(C);
   cout << "Value: " << int(C) << " How full: " << double(C) << " Container: " << C << endl;
   B = A = 10;
   B = A += 20;
 /*  cout << "B: ";
   B.display();
   cout << " A: ";
   A.display() << endl;
 */  
   cout << "B: " <<  B << " A: " << A  << endl;
   return 0;
}