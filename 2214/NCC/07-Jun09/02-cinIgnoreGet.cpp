#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;


// cin.ignore(1000, '\n'); does exaclty what is done below
void flushKeybaord() {
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
      cout << "Bad integer, try again: ";
      cin.clear();// i am sorry
      //flushKeybaord();
      cin.ignore(10000, '\n');
      cin >> num1;
   }
   cout << "Enter another integer: ";
   cin >> num2;
   cout << "You enterd, num1: " << num1 << ", num2: " << num2 << endl;
   return 0;
}