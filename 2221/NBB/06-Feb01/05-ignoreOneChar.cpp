#include <iostream>
#include "Mark.h"
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   int value;;
   cout << "Enter an int: ";
   cin.ignore();  // one char to ignore
   value = getint();
   cout << "Value: " << value << endl;
   return 0;
}

