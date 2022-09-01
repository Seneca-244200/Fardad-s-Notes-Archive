#include "Company.h"
using namespace sdds;
int main() {
   Company C, D;
   C.start();// must happen right after creating the comapany
   D.start("Seneca College");// must happen right after creating the comapany
   C.hire();
   C.listEmployees();
   D.hire();
   D.listEmployees();
   C.closeDown();// must happen right before C dies
   D.closeDown();// must happne right before D dies to prevent memory leak
   return 0;
}
