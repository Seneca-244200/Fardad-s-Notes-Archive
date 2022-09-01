#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Employee.h"
using namespace std;

namespace sdds {
   // file scope
   // extern makes turns a file scope into a global scope
   // for any file including the header file
   int total_no_of_employees;
   int no_of_employees = 0;
   
   Employee* workers;

   void openCompany() {  // start the company (allocate)
      cout << "Number of Employees in company: ";
      cin >> total_no_of_employees;
      cin.ignore(1000, '\n');  // flush keyboard
      workers = new Employee[total_no_of_employees];
      if (workers == nullptr) {
         total_no_of_employees = 0;
         cout << "Out of memory!!!" << endl;
      }
   }
   void closeDownCompany() {  // close down  (delete)
      for (int i = 0; i < no_of_employees; i++) {
         delete[] workers[i].m_name;
      }
      delete[] workers;
      workers = nullptr;
   }
   void hire() {  //hires all the employees
      while (no_of_employees < total_no_of_employees) {
         cout << "Employee no " << no_of_employees + 1 << " out of " << total_no_of_employees << endl << "> ";
         hire(workers[no_of_employees]);
         no_of_employees++;
      }
   }
   void expandCompany() {
      int to_add;
      Employee* temp; // function scope
      cout << "Number of employees to add: ";
      cin >> to_add;
      cin.ignore(1000, '\n');
      temp = new Employee[total_no_of_employees + to_add];
      for (int i = 0; i < total_no_of_employees; i++) {// i has bloack scope
         temp[i] = workers[i];
      }
      delete[] workers;
      workers = temp;
      total_no_of_employees += to_add;
   }
   void hire(Employee& E) {  // hires only one
      char name[301]; // automatic varable;
      cout << "Name: ";   
      cin.getline(name,301); // no flush needed since \n is removed
      E.m_name = new char[strlen(name) + 1];
      strcpy(E.m_name, name);
      cout << "Salary: ";
      cin >> E.m_salary;
      cin.ignore(1000, '\n');  // flush keyboard
      cout << "ID: ";
      cin >> E.m_empId;
      cin.ignore(1000, '\n');  // flush keyboard
   }
   void display(const Employee& emp) {
      cout << "Name: " << emp.m_name << "(" << emp.m_empId << "), Salary: " << emp.m_salary << endl;
   }
   void listEmployees() {
      int i;
      for (i = 0; i < no_of_employees; i++) {
         cout << i + 1 << ": ";
         display(workers[i]);
      }
   }
   int curHiredEmployees() {
      return no_of_employees;
   }
}