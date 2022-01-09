#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   int num{};
   cout << "Enter an integer or just Enter to cancel: ";
   if (Utils::read(num)) {
      cout << "You Entered: " << num << endl;
   }
   else {
      cout << "Aborted!" << endl;
   }
   return 0;
}