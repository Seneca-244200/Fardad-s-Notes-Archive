#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
Mark getTest1() {
   Mark test1("Test 1");
   cout << "Please enter Test one mark: ";
   test1.read();
   return test1;
}
int main() {

   getTest1();

   return 0;
}

