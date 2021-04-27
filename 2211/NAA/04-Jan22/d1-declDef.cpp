#include <iostream>
using namespace std;
void foo(); // declration

void faa() { // declared and defined at the same time.
   cout << "Faaing around!" << endl;
}

int main() {
   foo();
   faa();
   return 0;
}

void foo() { // definition
   cout << "Fooing around!" << endl;
}