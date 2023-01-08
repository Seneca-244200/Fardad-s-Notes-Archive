#include <iostream>
#include "FullName.h"
#include "Utils.h"
using namespace std;
using namespace sdds;
void sayHello(FullName name) {
   cout << "Hello " << name << endl;
}
int main() {
   sdds_debug = true;
   FullName n;
   cout << "What is your name?\n";
   cin >> n;
   sayHello(n);
   return 0;
}