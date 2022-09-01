#include "Company.h"
using namespace sdds;
// This is not tested, make sure it works
// added constructor and dectructor to Company and used Name class!
int main() {
   Company C, D = "Seneca Collge" ;
   C.hire();
   C.listEmployees();
   D.hire();
   D.listEmployees();
   return 0;
}
