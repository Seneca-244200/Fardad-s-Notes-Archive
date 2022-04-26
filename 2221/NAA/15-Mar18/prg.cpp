#include <iostream>
#include "FullName.h"
#include "Utils.h"
using namespace std;
using namespace sdds;
void sayHello(FullName& name) {
   cout << "Hello " << name << endl;
   cout << "Your first name is: " << name.first() << endl;
   cout << "Your last name is: " << name.last() << endl;
}
int main() {
   sdds_debug = true;
   FullName n;
   cout << "What is your name?\n";
   cin >> n;
   sayHello(n);
   return 0;
}