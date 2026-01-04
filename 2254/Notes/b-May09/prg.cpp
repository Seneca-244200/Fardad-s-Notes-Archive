#include <iostream>
#include "NumIO.h"
using namespace std;
using namespace seneca;


int main() {
   int age;
   cout << "OOP244 NAA May09" << endl;
   cout << "How old are you?\n> ";
   if (getValidatedNum(&age, 18, 90)) {
      cout << "Hello and welcome, you are " << age << " years old and permitted to enter!" << endl;
   }
   else {
      cout << "Invalid age entry" << endl;
   }
   return 0;
}


