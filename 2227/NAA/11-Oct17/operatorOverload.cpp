#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Lisa";
   name++;
   name += "Simpson";
   cout << name << endl;
   String bname = "Simpon", fullname;
   ++bname;
   fullname = "bart" + bname;
   cout << fullname << endl;
   return 0;
}