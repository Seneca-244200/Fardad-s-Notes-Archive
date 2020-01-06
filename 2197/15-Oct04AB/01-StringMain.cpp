#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String S = "Fred";
   String F;
   S.display() << endl;
   S += " ";
   S += "Flinston";
   S.display() << endl;
   return 0;
}