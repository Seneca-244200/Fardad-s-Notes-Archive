#include <iostream>
#include <cstring>
using namespace std;
struct Bar {   // this is a Class (encapsulation)
   char title[7];
   char fill;
   int value;
   void set() {
      cout << "Title: ";
      cin >> title;
      cout << "Fill Character: ";
      cin >> fill;
   }
   void set(int valueArg) {
      value = valueArg;
   }
   void display() {
      int i;
      cout << title << endl;
      for (i = 0; i < value; i++) {
         cout << fill;
      }
      cout << endl;
   }
   void display(char field) {
      switch (field) {
      case 't':
         cout << title;
         break;
      case 'f':
         cout << fill;
         break;
      case 'v':
         cout << value;
         break;
      default:
         cout << "Unknown Field value: " << field;
         break;
      }
   }
};


int main() {
   int i;
   bool done = false;
   int val;
   char yesno;
   struct Bar b[3];
   for (i = 0; i < 3; i++) {
      cout << i + 1 << " --->" << endl;
      b[i].set();
   }
   while (!done) {
      cout << "Please enter the stats: " << endl;
      for (i = 0; i < 3; i++) {
         b[i].display('t');
         cout << ": ";
         cin >> val;
         b[i].set(val);
      }
      cout << "Stats: " << endl;
      for (i = 0; i < 3; i++) {
         b[i].display();
      }
      cout << "Continue: (Y/N) ";
      cin >> yesno;
      if (yesno == 'y' || yesno == 'n') done = true;
   }
   return 0;
}
