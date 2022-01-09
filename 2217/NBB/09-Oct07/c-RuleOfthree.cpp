#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

void sayHello(Name nm) {
   cout << "Hello " << nm << ", Welcome to oop244" << endl;
}

int main() {
   Name N = "Fardad"; 
   Name A;
   Name B;
   Name& R = B;
   cout << N << " is asking for your name: ";
   cin >> A;
   sayHello(A);  // sayHello(Name nm = A);
   B = A = N;
   cout << N << endl;
   cout << A << endl;
   cout << B << endl;
   B = R;
   cout << B << endl;
   cout << R << endl;
   return 0;
}

