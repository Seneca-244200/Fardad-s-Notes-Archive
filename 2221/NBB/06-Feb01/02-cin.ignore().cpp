#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;

int main() {
   char ch;
   cout << "> ";
   ch = cin.get(); // reads one character form console
   cout << "ch: " << ch << endl;
   cin.ignore(3, '\n');
   cout << "> ";
   ch = cin.get(); // reads one character form console
   cout << "ch: " << ch << endl;
   cin.ignore(10000, '\n'); // flush keyboard
   cout << "> ";
   ch = cin.get(); // reads one character form console
   cout << "ch: " << ch << endl;
   return 0;
}

