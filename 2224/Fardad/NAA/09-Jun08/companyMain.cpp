#include "Company.h"
using namespace sdds;
int main() {
   Company A, B, C;
   A.open();  // must happen right after Company is created
   B.open("Seneca College");
   A.hire();
   A.listEmployees();
   A.expand();
   A.hire();
   B.hire();
   A.listEmployees();
   B.listEmployees();
   C.listEmployees();
   A.closeDown();  // must happen before Company dies (no mem leak)
   B.closeDown();
   C.closeDown();
   return 0;
}