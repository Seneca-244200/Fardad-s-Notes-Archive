#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;

void prnEmployees(const Employee e[], int size);

int main() {
   Employee emp[3] = { { 2345 },{1234}, {3333} };
   cout << TAX << endl;
   prnEmployees(emp, 3);
   return 0;
} // << all emps will die and m_empid members will die with them

void prnEmployees(const Employee e[], int size) {  // e and size have fucntion scope
   int row = 1;  // function scope
   for (int i = 0; i < size; i++) {
      int r = row++;
      cout << r << ": ";
      e[i].display();
   }

}// row, e and size will die here
