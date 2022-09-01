#include <iostream>
#include "Company.h"
#include "Employee.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   Company::Company(){
      open();
   }
   Company::Company(const char* name){
      open(name);
   }
   Company::~Company(){
      closeDown();
   }
   void Company::open() {  // start the company (allocate)
      cout << "Enter Company Name" << endl << "> ";
      m_name.read();
   }
   void Company::open(const char* name){
      m_name.set(name);
      cout << "Number of employeess in ";
      displayName();
      cout << "> ";
      m_total_m_no_of_employees = U.getInt();
      m_workers = new Employee[m_total_m_no_of_employees];
      if (m_workers == nullptr) {
         m_total_m_no_of_employees = 0;
         cout << "Out of memory!!!" << endl;
      }
   }
   void Company::closeDown() {  // close down  (delete)
      cout << "closing down ";
      displayName();
      delete[] m_workers;
      m_workers = nullptr;
   }
 
   void Company::hire() {  //hires all the employees
      cout << "hiring for ";
      displayName();
      while (m_no_of_employees < m_total_m_no_of_employees) {
         cout << "Employee no " << m_no_of_employees + 1 << " out of " << m_total_m_no_of_employees << endl << "> ";
         m_workers[m_no_of_employees].hire();
         //m_workers[m_no_of_employees].m_name[0] = 0;  cannot access private propertes
         m_no_of_employees++;
      }
   }
   void Company::expand() {
      cout << "Expanding ";
      displayName();
      int to_add = U.getInt("Number of employees to add: ");
      Employee* temp{}; // function scope
      temp = new Employee[m_total_m_no_of_employees + to_add];
      for (int i = 0; i < m_total_m_no_of_employees; i++) {// i has bloack scope
         temp[i] = m_workers[i];
      }
      delete[] m_workers;
      m_workers = temp;
      m_total_m_no_of_employees += to_add;
   }
   void Company::listEmployees() {
      cout << "Employees of ";
      displayName();
      int i{};
      for (; i < m_no_of_employees; i++) {
         cout << i + 1 << ": ";
         m_workers[i].display();
      }
   }
   int Company::noOfEmployees() {
      return m_no_of_employees;
   }
   void Company::displayName(){
      m_name.display();
   }
}
