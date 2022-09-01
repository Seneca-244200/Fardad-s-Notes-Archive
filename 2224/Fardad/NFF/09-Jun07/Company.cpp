#include <iostream>
#include "Employee.h"
#include "Company.h"
#include "Utils.h"
#include "Name.h"
using namespace std;
namespace sdds {
   Company::Company() {
      startup();
   }
   Company::Company(const char* name) {
      startup(name);
   }
   Company::~Company() {
      closeDown();
   }
   void Company::displayName(){
      m_name.display();
   }
   void Company::startup(){
      cout << "Enter Company Name" << endl << "> ";
      m_name.read();
      setNoOfEmployees();
   }
   void Company::startup(const char* name) {
      m_name.set(name);
      setNoOfEmployees();
   }
   void Company::setNoOfEmployees() {
      displayName();
      m_total_no_of_employees = U.getInt("Number if employees to hire: ");
      m_workers = new Employee[m_total_no_of_employees];
      if (m_workers == nullptr) {
         m_total_no_of_employees = 0;
      }
   }
   int Company::noOfEmployees() {
      return m_no_of_employees;
   }
   void Company::closeDown() {
      deleteEmployees();
   }
   void Company::expand() {
      int to_add{};
      Employee* temp{};        // function scope: will die when the func  is done.
      displayName();
      to_add = U.getInt("Enter number of employees to add to company: ");
      temp = new Employee[m_total_no_of_employees + to_add];
      for (int i = 0; i < m_total_no_of_employees; i++) {
         temp[i] = m_workers[i];
      }
      deleteEmployees();
      m_workers = temp;
      m_total_no_of_employees += to_add;
   }

   void Company::deleteEmployees() {
      delete[] m_workers;
      m_workers = nullptr;
   }
   void Company::listEmployees() {
      displayName();
      for (int i = 0; i < m_no_of_employees; i++) {
         int j = i;  // j has a block scope
         m_workers[i].display();
      }
   }
   void Company::hire() {
      displayName();
      while (m_no_of_employees < m_total_no_of_employees) {
         cout << "Employee number " << m_no_of_employees + 1 << " out of " << m_total_no_of_employees << endl;
         m_workers[m_no_of_employees].hire();
         //        m_workers[m_no_of_employees].m_name[0] = 0; private and not accessible
         m_no_of_employees++;
      }
   }

}