#include <iostream>
using namespace std;

struct Bar {   // this is a Class (encapsulation)
   char title[7];
   char fill;
   int value;
   void display() {
      int i;
      cout << title << endl;
      for (i = 0; i < value; i++) {
         cout << fill;
      }
      cout << endl;
   }
};
int main() {
   struct Bar b[3] = { { "IPC144", '=', 70 },
   { "OOP244", '+', 60 },
   { "OOP345", '+', 50 } };
   for (int i = 0; i < 3; i++) {
      b[i].display();
   }
   return 0;
}
