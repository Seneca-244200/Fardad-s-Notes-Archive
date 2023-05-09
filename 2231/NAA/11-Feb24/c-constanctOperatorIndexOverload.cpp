#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String name = "james";
   String empty;
   cout << name[0] << endl; // want it to print 'J'
   cout << name[3] << endl; // want it to print 'e'
   cout << name[234] << endl;

   for(int i = 0; i < 30; i++) {
      cout << name[i];
   }
   cout << endl;

   cout << empty[0] << endl;
   return 0;
}