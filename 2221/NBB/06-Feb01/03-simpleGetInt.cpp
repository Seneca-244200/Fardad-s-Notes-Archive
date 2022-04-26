#include <iostream>
#include "Mark.h"
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   int value;;
   cout << "Enter an int: ";
   value = getint();
   cout << "you enterd " << value << endl;
   cout << "Enter another int: ";
   value = getint();
   cout << "you enterd " << value << endl;
   return 0;
}

