#include <iostream>
#include "Student.h"
using namespace sdds;
using namespace std;
void flushKeyboard() {  // cin.ignore(1000, '\n');
   char ch=0;
   for (int i{}; i < 1000 && ch != '\n'; i++) {
      cin >> ch;
   } 
}
int main() {
   int num1, num2;
   cout << "Enter a number: ";
   cin >> num1;
   if (cin.fail()) {
      cout << "you enterd a bad number! " << endl;
      cin.clear();// activate cin to start working again
      cin.ignore(1000, '\n');
   }
   cout << "Enter another number: ";
   cin >> num2;
   cout << "n1: " << num1 << "  n2: " << num2 << endl;
   return 0;
}