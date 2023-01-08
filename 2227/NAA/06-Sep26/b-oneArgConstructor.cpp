#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
void DisplayContainerWithARow(int row, const Container& C) {
   cout << row << ": ";
   C.display() << endl;
}

int main() {
   /*
   Assignment at the moment of creation is initialization which is invoking one argument constructor.
   */
   //Container C = "Gasoline";  // potato
   Container C("Gasoline");     // potaato
   double d = 123.456;         // potato
   double d(123.456);          // potaato
   C.display() << endl;
   cout << d << endl;
   return 0;
}