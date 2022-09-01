#include <iostream>
#include "Company.h"
#include "Employee.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   void Company::start(){
      char tempName[201]; // automatic or "statically allocated"
      cout << "Please enter company name: ";
      cin.getline(tempName, 201, '\n');// read everything up to \n or 200 chars
                                       // whichever comes first and throws
                                       // away the '\n' out of the keyboard buffer
      start(tempName);
   }
   void Company::start(const char* name){
      if (name) {
         m_name = new char[U.strlen(name) + 1];
         U.strcpy(m_name, name);
      }
      else {
         m_name = nullptr;
      }
      setNoOfEmployees();
   }
   void Company::setNoOfEmployees() {
      displayName();
      cout << "Number of employees to hire: ";
      cin >> m_total_no_of_employee;
      cin.ignore(1000, '\n');
      m_workers = new Employee[m_total_no_of_employee];
      if (m_workers == nullptr) {
         m_total_no_of_employee = 0;
      }
   }
   void Company::displayName(){
      if (m_name) {
         cout << "Company: " << m_name << endl;
      }
      else {
         cout << "No name company" << endl;
      }
   }
   void Company::hireMoreEmployees() {
      int to_add;
      Employee* temp;
      cout << "Number of employees to add: " << endl;
      cin >> to_add;
      temp = new Employee[m_total_no_of_employee + to_add];
      for (int i = 0; i < m_total_no_of_employee; i++) {
         temp[i] = m_workers[i];
      }
      deleteEmployees();
      m_total_no_of_employee += to_add;
      m_workers = temp;
   }

   void Company::deleteEmployees() {
      delete[] m_workers;  // if m_workers is nullptr, nothing happens 
      m_workers = nullptr;
   }
   void Company::listEmployees() {
      displayName();
      int i;   // function scope
      for (i = 0; i < m_no_ofEmployees; i++) {
         m_workers[i].display();
      }
   }
   void Company::hire() {
      displayName();
      while (m_no_ofEmployees < m_total_no_of_employee) {
         cout << "Employee no " << m_no_ofEmployees + 1 << " out of " << m_total_no_of_employee << endl;
         m_workers[m_no_ofEmployees].hire();
         m_no_ofEmployees++;
      }
   }
   int Company::noOfEmployees() {
      return m_no_ofEmployees;
   }
   void Company::closeDown(){
      delete[] m_name;
      deleteEmployees();
   }
}