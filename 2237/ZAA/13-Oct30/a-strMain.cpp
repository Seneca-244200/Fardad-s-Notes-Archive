#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;
int main( ) {
   String name = "Fred";  // one arg const (const char*)
   String surname = "Soley";
   String fullname = name;  // ong arg const(const String&) copy const;

   fullname += " ";
   fullname += surname;
   cout << fullname << endl;
   cout << "Your name?\n> ";
   cin >> name;
   cout << "Hello " << name << endl;
   return 0;
}