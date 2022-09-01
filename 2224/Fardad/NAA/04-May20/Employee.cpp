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

   void hire() {
      if (cur_no_of_employees < max_no_of_employees) {
         Employee emp;
         read(emp);
         workers[cur_no_of_employees] = emp;
         cur_no_of_employees++;
      }
   }
   void fire(const Employee& emp) {
      if (cur_no_of_employees > 0) {
         // remove the employee from the system
         cur_no_of_employees--;
      }

   }
   void read(Employee& E) {
      cout << "Name: ";
      cin >> E.m_name;
      cout << "Salary: ";
      cin >> E.m_salary;
      cout << "ID: ";
      cin >> E.m_empId;
   }
   void display(const Employee& emp) {
      cout << "Name: " << emp.m_name << "(" << emp.m_empId << "), Salary: " << emp.m_salary << endl;

   }
   void listEmployees() {

   }
   int curHiredEmployees() {
      return cur_no_of_employees;
   }
}