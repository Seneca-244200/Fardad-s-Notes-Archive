#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
   void Utils::read(int& num, int min, int max) {
      bool ok = false;
      char newline = 'x';
      do {
         cin >> num;   
         newline = cin.get();
         if (cin.fail() || newline != '\n') {   // ten<ENTER> or 10and something after<ENTER>
            ok = false;
            cin.clear();
            cin.ignore(10000, '\n');
            // an invalid integer value was entered!!!
            cout << "Please enter a valid integer value: ";
         }
         else {
            // it is a valid integer but I don't know if it is in range.
            if (num >= min && num <= max) {
               ok = true; // everything good to go
            }
            else {
               ok = false;  // int is not in range.
               cout << max << "<= value <=" << min << ", try again: ";
            }
         }
      } while (!ok);
   }
}
