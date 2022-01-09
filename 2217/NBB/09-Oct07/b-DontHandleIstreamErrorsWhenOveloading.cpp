#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name N = "Fardad";
   Name A;
   cout << N << endl;
   cout << "Pleae enter your name: ";
   cin >> A;
   if (cin.fail()) {
      cout << "You typed too long!!!!" << endl;
   }
   else {
      cout << "Hello " << A << endl;
   }
   return 0;
}

