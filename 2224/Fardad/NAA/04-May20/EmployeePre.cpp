#include <iostream>
#include "Employee.h"
using namespace std;

namespace sdds {
   // file scope
   // extern makes turns a file scope into a global scope
   // for any file including the header file
   const int max_no_of_employees = 100;
   int cur_no_of_employees = 0;
   Employee workers[max_no_of_employees];

   void hire(Employee* emp) {
      if (cur_no_of_employees < max_no_of_employees) {
         workers[cur_no_of_employees] = *emp;
         cur_no_of_employees++;
      }
   }
   void fire(Employee* emp) {
      if (cur_no_of_employees > 0) {
         // remove the employee from the system
         cur_no_of_employees--;
      }

   }
   void display(const Employee* emp) {

   }
   void listEmployees() {

   }
   int curHiredEmployees() {
      return cur_no_of_employees;
   }
}