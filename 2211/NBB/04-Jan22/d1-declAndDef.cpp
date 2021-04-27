#include <iostream>
using namespace std;

void foo();   // declaration  (prototype)

void faa() {  // declaration and defintion of the the function.
   cout << "Faaing!" << endl;
}

int main() {
   foo();
}

void foo() {   // definintion
   cout << "Fooing!" << endl;
}