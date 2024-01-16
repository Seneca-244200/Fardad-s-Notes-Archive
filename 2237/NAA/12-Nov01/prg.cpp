#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;

int main( ) {
   String name = "Fred";
   cout << name << " starts with " << name[0] << " and ends with " << name[name.length( ) - 1] << endl;
   name[0] = 'G';
   cout << name << " starts with " << name[0] << " and ends with " << name[name.length( ) - 1] << endl;

   return 0;
}