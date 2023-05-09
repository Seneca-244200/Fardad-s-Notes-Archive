#include <iostream>
#include "Utils.h"
using namespace std; 
namespace sdds {
   Utils U;  //file scope
   int Utils::getInt() {
      int value{};
      bool done = false;
      do {
         done = false;
         cin >> value;
         if (!cin) {
            cin.clear();
            cout << "Invalid Integer, retry: ";
         }
         else {
            if (cin.get() != '\n') {
               cout << "Only an integer please, retry: ";
            }
            else {
               done = true;
            }
         }
         if(!done) cin.ignore(10000, '\n');
      } while (!done);
      return value;
   }
   int Utils::getInt(int min, int max,const char* prompt) {
      int value{};
      if (prompt) cout << prompt;
      do {
         value = getInt();
       } while ((value < min || value > max) && 
          cout << "[" << min << "<=" << max << "], retry: ");
      return value;
   }

}
