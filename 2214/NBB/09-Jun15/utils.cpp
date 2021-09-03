#include <iostream>
using namespace std;
#include "utils.h"

/*
123\n
123abd\n


*/
namespace sdds {
   int& get(int& val, const char* prompt) {
      if (prompt) cout << prompt;
      cin >> val;
      while (cin.fail()) {
         cin.clear();
         cout << "Invaid integer, please try again: ";
         cin.ignore(1000, '\n');
         cin >> val;
      }
      cin.ignore(1000, '\n');
      return val;
   }
   double& get(double& val, const char* prompt) {
      if (prompt) cout << prompt;
      cin >> val;
      while (cin.fail()) {
         cin.clear();
         cout << "Invaid integer, please try again: ";
         cin.ignore(1000, '\n');
         cin >> val;
      }
      cin.ignore(1000, '\n');
      return val;
   }
}