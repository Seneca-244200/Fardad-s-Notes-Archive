#include <iostream>
#include "Employee.h"
#include "Utils.h"
using namespace std;

namespace sdds {


   void Employee::display() {
      cout << "Name: " << m_name.get() << "(" << m_empId
         << "), Salary: " << m_salary << endl;
   }

   void Employee::hire() {
      cout << "Name: ";
      m_name.read();
      m_salary = U.getDouble("Salary: ");
      m_empId = U.getInt("Employee ID: ");
   }













}