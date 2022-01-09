#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

bool getInt(int& value, const char* prompt = nullptr) {
   bool doneIntEntry = true;
   bool doneUserEntry = false;
   if (prompt) cout << prompt;
   if (cin.peek() == '\n') {
      doneIntEntry = false;
   }
   else {
      while (!doneUserEntry) {
         cin >> value;
         if (cin.fail()) {
            cin.clear();   // you say you are sorry!
            cin.ignore(2000, '\n');
            cout << "Invalid integer, try again: ";
         }
         else if(cin.get() != '\n'){  // this means they have garbage after the number
            cout << "Please an integer only, try again: ";
            cin.ignore(2000, '\n');
         }
         else {
            doneUserEntry = true;
         }
      }
   }
   return doneIntEntry;
}

int main() {
   int age;
   if (getInt(age, "Enter your age or Press Enter to skip: ")) {
      cout << "You are " << age << " years old!" << endl;
   }
   else {
      cout << "I see, you rather not say...." << endl;
   }
   return 0;
}


