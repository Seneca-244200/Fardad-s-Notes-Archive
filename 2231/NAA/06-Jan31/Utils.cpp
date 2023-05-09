#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   Utils U;// file scope instance calle U of Utils in Utils.cpp


   int Utils::getInt(){
      int value{};
      bool done{};
      do {
         done = false;
         cin >> value;
         if (cin) {  // if(!cin.fail()){
            if (cin.get() != '\n') { // if the next char after int is not newline
               cout << "Only an integer please, retry: ";
            }
            else {
               done = true;
            }
         }
         else {
            cin.clear(); // clear the fail state
            cout << "Invalid Integer, try again: ";
         }
         //if (!done) cin.ignore(10000, '\n');
         (!done) && cin.ignore(10000, '\n'); // same but quicker
      } while (!done);
      return value;
   }

   int Utils::getInt(int min, int max, const char* prompt) {
      int value{};
      if (prompt) cout << prompt;
      do {
         value = getInt();
      } while ((value < min || value > max) && 
         cout << "[" << min << "<=Val<=" << max << "], retry: ");
      return value;
   }
}
