#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void greet(String theName) {
   cout << "hello " << theName << " hava a good day!" << endl;
}
String getName() {
   String theName;
   cout << "Name: ";
   cin >> theName;
   return theName;
}
int main() {
   String name;
   name = getName();
   greet(name);
   return 0;
}