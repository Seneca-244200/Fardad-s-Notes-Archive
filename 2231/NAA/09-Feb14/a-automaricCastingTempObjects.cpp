#include <iostream>
#include "String.h"
using namespace std;
using namespace sdds;
void testone() {
   String name = "Fred", lastname = "Soley";
   name += lastname;
   cout << name << endl;

}
int main() {
   String name = "Fred", lastname = "Soley";
   name += " ";  // String::operator+= (const char*)
   name += lastname;
   cout << name << endl;
   return 0;
}