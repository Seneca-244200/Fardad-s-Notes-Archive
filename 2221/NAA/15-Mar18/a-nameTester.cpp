#include <iostream>
#include "Name.h"
#include "Utils.h"
using namespace std;
using namespace sdds;
void sayHello(Name name) {
   cout << "Hello " << name << endl;
}
int main() {
//   sdds_debug = true;
   Name n;
   Name a;
   cout << "What is your name?\n> ";
   cin >> n;
   a = n;
   sayHello(a);
   return 0;
}