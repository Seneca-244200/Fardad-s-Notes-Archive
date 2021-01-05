#include <iostream>
using namespace std;
int getInt() {
   int value = 0;
   bool badEntry;
   do {
      badEntry = false;
      cin >> value;
      if (cin.fail()) {
         cout << "Bad int, try again: ";
         cin.clear();
         badEntry = true;
      }
      cin.ignore(1000, '\n');
   } while (badEntry);
   return value;
}
int getInt(int min, int max) {
   int value = 0;
   do {
      value = getInt();
      if (value < min || value > max) {
         cout << "Invalid value [" << min << "<value<" << max << "]: ";
      }
   } while (value < min || value > max);
   return value;
}

int getInt(int min, int max, const char* prompt) {
   cout << prompt;
   return getInt(min, max);
}

int main() {
   int val;
   cout << "an Int: ";
   val = getInt();
   cout << val << endl;
   cout << "An int between 0 and 100: ";
   val = getInt(0, 100);
   cout << val << endl;
   val = getInt(1, 10, "Enter an int between 1 and 10: ");
   cout << val << endl;

   return 0;
}