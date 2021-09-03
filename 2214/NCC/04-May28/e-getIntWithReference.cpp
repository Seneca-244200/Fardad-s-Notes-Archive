#include <iostream>
#include "Scope.h"
using namespace std;
using namespace sdds;

bool getInt(int& iref, int min, int max, const char* prompt = nullptr) {
   if (prompt) {
      cout << prompt;
   }
   else {
      cout << "Enter an Integer: ";
   }
   cin >> iref;
   return iref >= min && iref <= max;
}

int main() {
   int val;
   int x;
   if (getInt(val, 10, 20)) {
      cout << "Value is: " << val << endl;
   }
   else {
      cout << "Invalid value" << endl;
   }
   if (getInt(x, 0, 100, "Enter a percentage value: ")) {
      cout << "Value is: %" << x << endl;
   }
   else {
      cout << "Invalid value" << endl;
   }

   return 0;
}