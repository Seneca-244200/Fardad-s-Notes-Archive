#include <iostream>
using namespace std;

bool getInt(int& iref, int min, int max, const char* prompt = nullptr) {
   if (prompt) {
      cout << prompt;
   }
   else {
      cout << "Enter an int: ";
   }
   cin >> iref;
   return iref >= min && iref <= max;
}

int main() {
   int val=0;
   int x = 0;
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