#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int num{};
   cout << "Enter your age: (Entry only to abort):";
   if (Utils::read(num, 1, 100)) {
      if (num > 19) 
         cout << "Want a drink?" << endl;
      else 
         cout << "No drink for you" << endl;
   }
   else {
      cout << "aborted!" << endl;
   }
   return 0;
}