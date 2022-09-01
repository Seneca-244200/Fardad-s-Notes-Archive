#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String name = "Fardad";
   String ard = "ard";
   String abc = "abc";
   const char* ardPtr = name.contains("ard");
   if(name.contains("dad")) {
      cout << name << " contains dad" << endl;
   }
   if(name.contains(ard)) {
      cout << name << " contains " << ard << endl;
   }
   if(ardPtr) {
      cout << name << " contains " << ardPtr << endl;
   }
   if(!name.contains(abc)) {
      cout << name << " does not contain " << abc << endl;
   }
   return 0;
}




