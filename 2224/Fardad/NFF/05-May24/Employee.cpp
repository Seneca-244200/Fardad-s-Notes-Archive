#include <iostream>
#include "Employee.h"
using namespace std;

namespace sdds {
   int total_no_of_employees;  // file scope (module scope)
   int no_of_employees = 0;
   Employee* workers = nullptr;

   void display(const Employee& emp){
      cout << "Name: " << emp.m_name << "(" << emp.m_empId << "), Salary: " << emp.m_salary << endl;
   }
   
   void getNoOfEmployees() {
      cout << "Number if employees to hire: ";
      cin >> total_no_of_employees;
      workers = new Employee[total_no_of_employees];
      if (workers == nullptr) {
         total_no_of_employees = 0;
      }
   }
   void expandTheCompany() {
      int to_add{};
      Employee* temp{};        // function scope: will die when the func  is done.
      cout << "Enter number of employees to add to company: ";
      cin >> to_add;
      temp = new Employee[total_no_of_employees + to_add];
      for (int i = 0; i < total_no_of_employees; i++) {
         temp[i] = workers[i];
      }
      deleteEmployees();
      workers = temp;
      total_no_of_employees += to_add;
   }
   void deleteEmployees() {
      delete[] workers;
      workers = nullptr;
   }
   void listEmployees() {
      for (int i = 0; i < no_of_employees; i++) {
         int j = i;  // j has a block scope
         display(workers[i]);
      }
   }
   void hire() {
      while (no_of_employees < total_no_of_employees) {
         cout << "Employee number " << no_of_employees + 1 << " out of " << total_no_of_employees << endl;
         hire(workers[no_of_employees]);
         no_of_employees++;
      }
   }
   void hire(Employee& emp) {
         cout << "Name: ";
         cin >> emp.m_name;
         cout << "Salay: ";
         cin >> emp.m_salary;
         cout << "Employee ID: ";
         cin >> emp.m_empId;
   }

   void sampleFucntionForShadowing() {
      int no_of_employees // shadows the sdds::no_of_employees
           = total_no_of_employees;
      while ( no_of_employees > total_no_of_employees -2  ) {
         no_of_employees++;
         display(workers[no_of_employees]);
      }
   }

   int curHiredEmployees() {
      return no_of_employees;
   }












}