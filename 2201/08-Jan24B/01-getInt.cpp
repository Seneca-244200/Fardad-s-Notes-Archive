#include <iostream>
using namespace std;
int getInt(int min, int max, const char* prompt = "Enter an int: ");
int main() {
   int whatever;
   whatever = getInt(3, 120, "Enter your age: ");
   cout << "You are " << whatever << " years old!" << endl;

   return 0;
}
int getInt(int min, int max, const char* prompt) {
   int value = 0;
   bool done = false;
   cout << prompt;
   do {
      cin >> value;
      if (cin.fail()) {
         cout << "Bad int, try again: ";
         cin.clear();
      }
      else {
         if (value < min || value > max) {
            cout << "Invalid value [" << min << "<value<" << max << "]: ";
         }
         else {
            done = true;
         }
      }
      cin.ignore(1000, '\n');
   } while (!done);
   return value;
}