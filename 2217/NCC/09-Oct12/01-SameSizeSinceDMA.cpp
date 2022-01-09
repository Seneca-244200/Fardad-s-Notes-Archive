#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

void sayHello(const Name& name) {
   cout << "Hello " << name << endl;
}

int main() {
   Name N = "Fardad";
   cout << sizeof(N) << endl;
   cout << N << endl;
   cout << "Name: ";
   cin >> N;
   cout << sizeof(N) << endl;
   if (cin) {
      sayHello(N);
   }
   else {
      cout << "Too long, no name is that long!!!!" << endl;
   }
   return 0;
}


