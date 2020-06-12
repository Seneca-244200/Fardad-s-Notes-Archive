#include <iostream>
using namespace std;

int getInt(int min, int max , const char* prompt = nullptr);
int main() {
   int age;
   age = getInt(3, 120, "Please enter your age: ");
   cout << "You are " << age << " years old" << endl;
   return 0;
}

int getInt(int min, int max, const char* prompt) {
   int value = 0;
   bool done = false;
   if (prompt != nullptr) cout << prompt;
   while (!done) {
      cin >> value;
      if (cin.fail()) {
         cin.clear();
         cout << "Invlid Integer, try again please: ";
      }
      else {
         if (value < min || value > max) {
            cout << "Invalid value, [" << min << "<=value<=" << max << "]: ";
         }
         else {
            done = true; // all good;
         }
      }
      cin.ignore(1000, '\n');
   }
   return value;
}