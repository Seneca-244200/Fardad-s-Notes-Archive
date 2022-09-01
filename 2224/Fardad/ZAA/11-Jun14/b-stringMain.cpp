#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
// << left shift 
int main() {
   String str = "Hello";// call to one arg constructor
   cout << str << endl;
   cout << "Enter your name: ";
   cin >> str;
   cout << "Hello " << str << endl;
   return 0;
}