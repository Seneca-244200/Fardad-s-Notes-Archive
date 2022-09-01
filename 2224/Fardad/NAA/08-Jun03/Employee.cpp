#include <iostream>
#include "Employee.h"
#include "Utils.h"
using namespace std;
namespace sdds {


   void Employee::hire() {
      read();
   }
   void Employee::deallocateName(){
      delete[] m_name;
      m_name = nullptr;
   }
   void Employee::read() {  // hires only one
      char name[301]{}; // automatic varable;
      cout << "Name: ";   
      cin.getline(name,301); // no flush needed since \n is removed
      m_name = new char[U.strlen(name) + 1];
      U.strcpy(m_name, name);
      m_salary = U.getDouble("Salary: ");
      m_empId = U.getInt("ID: ");
   }
   void Employee::display() {
      cout << "Name: " << m_name 
           << "(" << m_empId 
           << "), Salary: " << m_salary 
           << endl;
   }


}