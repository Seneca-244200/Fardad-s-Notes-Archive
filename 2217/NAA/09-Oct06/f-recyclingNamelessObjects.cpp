#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

Name getName() {
   Name name;
   cout << "Please enter your name: ";
   cin >> name;
   return name;
}
void sayHello(Name name) { // bad one
   cout << "Hello " << name << endl;
}

int main() {
   sayHello(getName()); // Name name = getName();   
     // Nameless objects are never copied, but reused (named) with a new name
   return 0;
}
