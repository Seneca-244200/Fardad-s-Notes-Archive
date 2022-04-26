#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;

int main() {
   char ch;
   ch = cin.get(); // reads one character form console
   cout << "ch: " << ch << endl;
   ch = cin.get(); // reads one character form console 
   cout << "ch: " << ch << endl;
   cin.get(ch); // reads one character form console
   cout << "ch: " << ch << endl;
   cin.get(ch); // reads one character form console
   cout << "ch: " << ch << endl;
   return 0;
}

