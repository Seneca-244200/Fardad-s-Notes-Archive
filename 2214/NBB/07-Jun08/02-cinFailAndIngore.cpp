#include <iostream>
#include "Student.h"
using namespace sdds;
using namespace std;

/*
- findout if cin failed
- let cin know that you are dealing with problem
- fix problem
- continue working with cin.
*/
// the following is exactly what cin.ignore(1000,'\n')
void flushKeyboard() {  // ipc version 
   char ch;
   ch = cin.get();
   for (int i = 0; i < 1000 && ch != '\n'; i++) {
      ch = cin.get();
   }
}

int main() {
   int num1, num2;
   cout << "Enter an integer: ";
   cin >> num1;
   if (cin.fail()) {
      cout << "Bad integer!!!!" << endl;
      cin.clear();
      cin.ignore(1000, '\n');
   }
   cout << "Enter another integer: ";
   cin >> num2;

   cout << "you entered, num1: " << num1 << ", num2: " << num2 << endl;

   return 0;
}