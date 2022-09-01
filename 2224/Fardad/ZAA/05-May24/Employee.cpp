#include <iostream>
using namespace std;
#include "Employee.h"

namespace sdds {
   Employee* workers = nullptr;
   // file or module scope variable 
   int no_ofEmployees = 0;
   int total_no_of_employee;

   void getNoOfEmployees() {
      cout << "Number of employees to hire: " << endl;
      cin >> total_no_of_employee;
      workers = new Employee[total_no_of_employee];
      if (workers == nullptr) {
         total_no_of_employee = 0;
      }
   }
   void hireMoreEmployees() {
      int to_add;
      Employee* temp;
      cout << "Number of employees to add: " << endl;
      cin >> to_add;
      temp = new Employee[total_no_of_employee + to_add];
      for (int i = 0; i < total_no_of_employee; i++) {
         temp[i] = workers[i];
      }
      deleteEmployees();
      total_no_of_employee += to_add;
      workers = temp;
   }

   void deleteEmployees() {
      delete[] workers;  // if workers is nullptr, nothing happens 
      workers = nullptr;
   }
   void listEmployees() {
      int i;   // function scope
      for (i = 0; i < no_ofEmployees; i++) {
         display(workers[i]);
      }
   }
   void display(const Employee& emp)
   {
      cout << "Name: " << emp.m_name << "(" << emp.m_empId << "), Salary: " << emp.m_salary << endl;
   }
   void hire(Employee &emp) {
      cout << "Name: ";
      cin >> emp.m_name;
      cout << "Salay: ";
      cin >> emp.m_salary;
      cout << "Employee ID: ";
      cin >> emp.m_empId;
   }
   void hire() {
      while (no_ofEmployees < total_no_of_employee) {
         cout << "Employee no " << no_ofEmployees + 1 << " out of " << total_no_of_employee << endl;
         hire(workers[no_ofEmployees]);
         no_ofEmployees++;
      }
   }
   int curNoOfEmployees() {
      return no_ofEmployees;
   }
 
   void sampleScopeExampleFunction() {
      int no_ofEmployees; // shadows the no_ofEmployees in file and is a completely new vairable
      for (no_ofEmployees = 0; no_ofEmployees < 3; no_ofEmployees++) {
         if (no_ofEmployees == 0) {
            char first[] = "The first one!";  // first has a block scope and dies when the block is gone 
            cout << first << endl;
         }
         display(workers[no_ofEmployees]);
      }
      // cout << sdds::no_ofEmployees << endl; // this one is the one outside of the function.
   }
}