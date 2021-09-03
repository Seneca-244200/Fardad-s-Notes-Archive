#include <iostream>
#include "Scope.h"
using namespace std;

void func(int arg) {
   cout << arg << endl;
}

void setTo10(int& arg) {
   arg = 12345;
}
void setTo10UsingPointer(int* argPtr) {
   *argPtr = 123456;
}

bool getInt(int val, int min, int max, const char* prompt = nullptr) {
   if (prompt) {
      cout << prompt;
   }
   cin >> val;
   return val >= min && val <= max;
}

int main() {
   int a = 10;
   int b;
   b = 10;

   func(200);
   func(15);

   setTo10(b);
   cout << b << endl;
   setTo10(a);
   cout << a << endl;

   setTo10UsingPointer(&b);
   cout << b << endl;
   setTo10UsingPointer(&a);
   cout << a << endl;

   cout << "Enter an integer between 10 and 20: ";
   if (!getInt(a, 10, 20)) {
      cout << "Bad value" << endl;
   }
   else {
      cout << "you entered " << a << endl;
   }

   if (!getInt(a, 1, 5, "Enter number of subjects taken: ")) {
      cout << "Bad value" << endl;
   }
   else {
      cout << "you entered " << a << endl;
   }
   return 0;

}