#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

bool getInt(int& value, const char* prompt = nullptr);


int main() {
   int age;
   if (getInt(age, "Enter your age: ")) {
      cout << "You are " << age << " years old!" << endl;
   }
   else {
      cout << "I see, you rather not to say how old you are!" << endl;
   }
   return 0;
}

bool getInt(int& value, const char* prompt) {
   bool res = true;
   bool entryDone = false;
   if (prompt) cout << prompt;
   if (cin.peek() == '\n') {
      res = false;
      cin.get(); // get that int and throw it away
   }
   else{
      do {
         cin >> value;
         if (cin.fail()) {
            cin.clear(); // apologize!!!!
            cin.ignore(10000, '\n');
            cout << "Bad int, redo: ";
         }
         else if (cin.get() != '\n') { //  123adsfga<enter>  bad
            cout << "Please enter and integer only: ";  //  123<enter> good
            cin.ignore(10000, '\n');
         }
         else {
            entryDone = true;
         }
      } while (!entryDone);
   }
   return res;
}
