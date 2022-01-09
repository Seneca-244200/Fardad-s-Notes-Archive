#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
void sayHello(Name name) {
   cout << "Hello " << name << "!" << endl;
}
int main() {
   Name N("Jack");
   Name M = N; // assignment at the moment of creatrion is a call to a construction
               // in this case is a copy constructor
   cout << "Begining of main" << endl;
   sayHello(N); // sayHello(Name name = N);
   cout << "Also hello " << M << endl;
   cout << "End of main" << endl;
   return 0;
}