#include <iostream>
using namespace std;
// cout an object of type ostream
// something like: ostream cout; is in iostream header file.
// cin an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
int getInt(int min, int max);
int getInt();
int getInt(int min, int max, const char* prompt);
int main() {
   int num;
//   cout << "Enter an integer: ";
//   num = getInt();
//   num = getInt(10, 20);
   num = getInt(10, 20, "Enter a value between 10 and 20: ");
   cout << "You entered " << num << endl;
   return 0;
}

int getInt() {
   int value = 0;
   bool badEntry;
   char lastChar = 0;
   do {
      badEntry = false;
      cin >> value;
//     if (!cin) { // same as below
      if (cin.fail()) {
            cout << "Bad integer value, try again: ";
         cin.clear();
         cin.ignore(3000, '\n'); // flush Keyboard
         badEntry = true;
      }
      else {
         lastChar = cin.get();
         if (lastChar != '\n') {
            cout << "You must enter only an integer and nothing after, try again: ";
            cin.ignore(3000, '\n');
            badEntry = true;
         }
      }
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