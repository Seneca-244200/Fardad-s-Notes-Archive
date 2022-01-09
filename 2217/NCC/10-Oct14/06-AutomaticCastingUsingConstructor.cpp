#include <iostream>
#include "Cls.h"
using namespace std;
using namespace sdds;

int main() {
   Cls A = "A in main";
   cout << A << endl;
   A = "What is going to happen here?";
   cout << A << endl;
   return 0;
}

