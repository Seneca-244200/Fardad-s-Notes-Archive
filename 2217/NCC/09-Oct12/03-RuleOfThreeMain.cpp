#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

void sayHello(Name name) {
   cout << "Hello " << name << endl;
}

int main() {
   Name N = "Fardad";
   Name M = "Angelo";
   Name O = M;
   Name& refOfM = M;
   sayHello(N); // sayHell(Name name = N);
   sayHello(M); // sayHell(Name name = N);
   O = N = M;
   cout << M << " and " << N << " and " << O << " are here too!" << endl;
   M = refOfM;
   cout << M << endl;
   return 0;
}


