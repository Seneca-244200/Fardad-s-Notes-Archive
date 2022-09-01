#include <iostream>
#include "Company.h"
#include "Employee.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   void Company::open() {  // start the company (allocate)
      char tempName[301];
      cout << "Enter Company Name" << endl << "> ";
      cin.getline(tempName, 301, '\n');
      open(tempName);
   }
   void Company::open(const char* name){
      if (name) {
         m_name = new char[U.strlen(name) + 1];
         U.strcpy(m_name, name);
      }
      else {
         m_name = nullptr;
      }
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
      for (int i = 0; i < m_no_of_employees; i++) {
         //delete[] m_workers[i].m_name;  // name is not accessilbe, must be done through employees themselves
         m_workers[i].deallocateName();
      }
      delete[] m_name;
      m_name = nullptr;
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
      if (m_name) {  // having safe empty state
         cout << m_name << endl;
      }
      else {
         cout << "No Name Company!" << endl;
      }
   }
}
