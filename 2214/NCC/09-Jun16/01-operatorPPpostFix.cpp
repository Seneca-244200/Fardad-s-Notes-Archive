#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;


int main() {
   int c = 1;
   int d;
   d = c++;
   cout << c << endl;
   cout << d << endl;

   //assingment at the moment of creation is a 
   // call to a one argument constructor and NOT THE ASSIGNMENT OPERATOR
   Container C = "Milk"; 
   Container D;
   C.display() << endl;
   C = "Water";
   C = 1.0;
   C.display() << endl;
   D = ++C;
   C.display() << endl;
   D.display() << endl;
   D = C++;
   C.display() << endl;
   D.display() << endl;
   return 0;
}