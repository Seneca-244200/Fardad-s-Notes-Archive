#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

void sayHello(Name name) {
   cout << "Hello " << name << endl;
}

int main() {
   Name N = "Fardad";
   sayHello(N); // sayHell(Name name = N);
   cout << N << " is still here with no problem!" << endl;
   return 0;
}


