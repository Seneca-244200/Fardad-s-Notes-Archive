
#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;

void prnEmployees(const Employee e[], int size);

int main(){
   Employee emp[3] = { { 2345 },{1234}, {3333} };
   emp[1].display();
   cout << TAX << endl;
   prnEmployees(emp, 3);
   return 0;
} // << all emps will die and m_empid members will die with them

void prnEmployees(const Employee e[], int size) {
   int row = 1;
   for (int i = 0; i < size; i++) {
      int r = row++;
      cout << r<< ": ";
      e[i].display();
   } // r will die at the end of each loop
   // i dies here 
   if (row > 20) {
      int x = 0;
      // whatever 
   } // x dies here block scope
} // <<- row and size will die (function scope)
