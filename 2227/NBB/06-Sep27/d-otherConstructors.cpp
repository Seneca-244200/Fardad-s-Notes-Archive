#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   // assignment at the moment of creation,
   // is initialization and there fore a call to a 
   // constrcutor with ONE argument
   Container cnt = "Milk"; // potatos
   Container X("Water");   // potaatos
   double d(123.345);   // same as below
//   double d = 123.455;
   cnt.display() << endl;
   X.display() << endl;
   cout << d << endl;
   return 0;
}