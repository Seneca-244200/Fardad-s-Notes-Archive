#include "Company.h"
using namespace sdds;
int main() {
   Company C, D;
   C.startup();// has to be called right after creating company
   D.startup("Seneca College"); // same here
   C.hire();
   C.listEmployees();
   C.expand();
   C.listEmployees();
   D.hire();
   D.listEmployees();
   D.expand();
   D.listEmployees();
   C.closeDown();  // must be called at the end to prevent memory. 
   D.closeDown();  // same here
   return 0;
}