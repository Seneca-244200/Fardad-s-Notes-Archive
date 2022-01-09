#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;

void prnEmployees(const Employee e[], int size);

int main() {
   Employee emp[3] = { { 2345 },{1234}, {3333} };// block scope
   cout << "tax: " << sdds::TAX << endl;
   emp[0].display();
   emp[2].display();
   prnEmployees(emp, 3);
   return 0;
}  // all employees will die and their id with them 

void prnEmployees(const Employee e[], int size) {
   int row = 1; // << row, e and size function 
   for (int i = 0; i < size; i++) { // i block scope
      int r = row++;  // r block scope
      cout << r << ": ";
      e[i].display();
   }// r keeps dying at each loop but i only dies ones

   if (row > 20) {
      int x = 0; // block scope

   } // x dies here
}// row, e and size will die