#include <iostream>
using namespace std;
int getInt();
int getInt(int min, int max);
int getInt(int min, int max, const char* prompt);
int main() {
   int num;
   cout << "Enter an your mark: ";
   num = getInt(0, 100);
   cout << "You entered: " << num << endl;
   num = getInt(1, 10, "Enter a number between 1 and 10: ");
   cout << "You entered: " << num << endl;
   return 0;
}

int getInt() {
   int value;
   bool badEntry;
   char nextChar = char(0);
   do {
      badEntry = false;
      cin >> value;
      if (cin.fail()) {
         cout << "Bad integer, retry: ";
         cin.clear();
         cin.ignore(3000, '\n');
         badEntry = true;
      }
      else {
         nextChar = cin.get();
         if (nextChar != '\n') {
            cout << "Only enter an integer, retry: ";
            cin.ignore(3000, '\n');
            badEntry = true;
         }
      }
   } while (badEntry);
   return value;
}
int getInt(int min, int max) {
   int val = 0;
   do {
      val = getInt();
      if (val < min || val > max) {
         cout << "Invalid value [" << min << "<=value<=" << max << "]: ";
      }
   } while (val < min || val > max);
   return val;
}
int getInt(int min, int max, const char* prompt) {
   cout << prompt;
   return getInt(min, max);
}