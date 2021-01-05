#include <iostream>
using namespace std;
// cout is an object of type ostream
// ostream cout; is in iostream header file.
// cin is an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double

int getInt();
int getInt(int min, int max);
int getInt(int min, int max, const char* prompt);
int main() {
   int num;
   cout << "Enter an integer, between 10 and 20: ";
   num = getInt(10, 20);
   cout << "You entered: " << num << endl;
   cout << "--------------------------------------------------" << endl;
   num = getInt(0, 100, "Enter your mark: ");
   cout << "You entered: " << num << endl;
   return 0;
}

int getInt() {
   int value;
   bool badEntry;
   char nextChar;
   do {
      badEntry = false;
      cin >> value;
      if (cin.fail()) {
         cout << "Bad integer value, try again: ";
         cin.clear();
         cin.ignore(3000, '\n');
         badEntry = true;
      }
      else {
         nextChar = cin.get();
         if (nextChar != '\n') {
            cout << "Only enter an integer, try again: ";
            cin.ignore(3000, '\n');
            badEntry = true;
         }
      }
   } while (badEntry);

   return value;
}
int getInt(int min, int max) {
   int value;
   do {
      value = getInt();
      if (value < min || value > max) {
         cout << "Invalid value [" << min << "<=value<=" << max << "]: ";
      }
   } while (value < min || value > max);
   return value;
}
int getInt(int min, int max, const char* prompt) {
   cout << prompt;
   return getInt(min, max);
}