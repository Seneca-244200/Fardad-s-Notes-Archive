#include <iostream>
#include "Employee.h"
using namespace std;

namespace sdds {
   const int max_no_of_employees = 100;  // file scope (module scope)
   int cur_no_of_employees = 0;
   Employee workers[max_no_of_employees];
   void display(const Employee& emp){
      cout << "Name: " << emp.m_name << "(" << emp.m_empId << "), Salary: " << emp.m_salary << endl;
   }
   void hire(Employee& emp) {
      if (cur_no_of_employees < max_no_of_employees) {
         cout << "Name: ";
         cin >> emp.m_name;
         cout << "Salay: ";
         cin >> emp.m_salary;
         cout << "Employee ID: ";
         cin >> emp.m_empId;
         workers[cur_no_of_employees] = emp;
         cur_no_of_employees++;
      }
      // whatever...
   }
   void fire(Employee& e) {
      if (cur_no_of_employees > 0) {
         // remove employee from the system
         cur_no_of_employees--;
      }
   }

   int curHiredEmployees() {
      return cur_no_of_employees;
   }












}