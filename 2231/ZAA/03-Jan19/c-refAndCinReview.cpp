#include <iostream>
#include "bar.h"  // custom headers come always after system
using namespace std;
using namespace sdds;
double foo() {
   double ret{};

   return ret;
}


void setTo30(int& r) {
   r = 30;
}
void setTo30(int* ptr) {
   *ptr = 30;
}
bool read(int& val) {
   bool res{ true };
   cin >> val;
   if (cin.fail()) {
      res = false;
      cin.clear(); // I'm sorry
      cin.ignore(100000, '\n');
   }
   return res;
}
int main() {
   int a = 10;
   int age;
   setTo30(a); // setTo30(int& r = a);
   cout << a << endl;
   a = 200;
   cout << a << endl;
   setTo30(&a); // setTo30(int* ptr = &a);
   cout << "Your age please: ";
   if (read(age)) {
      if (age > 19) {
         cout << "A beer please!" << endl;
      }
      else {
         cout << "Get out of here!!!!" << endl;
      }
   }
   else {
      cout << "I asked for age you beeep!" << endl;
   }
   return 0;
}
