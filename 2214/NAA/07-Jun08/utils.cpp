#include <iostream>
using namespace std;
#include "utils.h"
namespace sdds {
   int getInt(const char* prompt) {
      int num = 0;
      if (prompt) cout << prompt;
      cin >> num;
      while (cin.fail()) {
         cin.clear();
         cin.ignore(10000, '\n');
         cout << "Invalid Integer, try again: ";
         cin >> num;
      }
      cin.ignore(10000, '\n');
      return num;
   }
}