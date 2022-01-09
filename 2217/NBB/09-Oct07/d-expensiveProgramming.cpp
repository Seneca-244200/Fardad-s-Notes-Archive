#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

void sayHello(Name nm) {
   cout << "Hello " << nm << ", Welcome to oop244" << endl;
}
Name getName() {
   Name temp;
   cout << "Please enter your name: ";
   cin >> temp;
   return temp;
}

void getName(Name& temp) {
   cout << "Please enter your name: ";
   cin >> temp;
}

int main() {
   Name N = "Fardad"; 
   Name A;
   A = getName();
//   getName(A);
   sayHello(A); // sayHello(Name nm = A) // copy constructor
   return 0;
}

