#include <iostream>
using namespace std;

struct Bar {
   char title[7];
   char fill;
   int value;
};
void displayBar(struct Bar B) {
   int i;
   cout << B.title << endl;
   for (i = 0; i < B.value; i++) {
      cout << B.fill;
   }
   cout << endl;
}

int main() {
   struct Bar b[3] = { 
      { "IPC144", '=', 70 },
      { "OOP244", '+', 60 },
      { "OOP345", '+', 50 } };
   for (int i = 0; i < 3; i++) {
      displayBar(b[i]);
   }
   return 0;
}
