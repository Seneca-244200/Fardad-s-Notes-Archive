#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   double num{};
   cout << "Enter a Number: (Entry only to abort): ";
   if (Utils::read(num)) {
      cout << "Number: " << num << endl;
   }
   else {
      cout << "aborted!" << endl;
   }
   return 0;
}