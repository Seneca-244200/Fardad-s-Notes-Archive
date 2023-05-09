#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void greet(String theName) {
   cout << "hello " << theName << " hava a good day!" << endl;
}
String getName() {
   String name;
   cout << "Name: ";
   cin >> name;
   return name;
}
int main() {
   String name;
   greet(getName()); // temp objects never get copied!
   return 0;
}