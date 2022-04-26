#include <iostream>
#include <iomanip>
using namespace std;
#include "Utils.h"
using namespace sdds;

int main() {
   int age;
   ut.getint(age, 18, 120, "age: ");
   if (cin) {
      cout << "You are " << age << " years old!" << endl;
   }
   else {
      cout << "Aborted!" << endl;
      cin.clear();
   }
   return 0;
}