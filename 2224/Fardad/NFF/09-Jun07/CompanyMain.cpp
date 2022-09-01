#include "Company.h"
using namespace sdds;
int main() {
   Company C, D = "Seneca College";
   C.hire();
   //cin >> C;
   //cout << C;
   C.listEmployees();
   C.expand();
   C.listEmployees();
   D.hire();
   D.listEmployees();
   D.expand();
   D.listEmployees();
   return 0;
}