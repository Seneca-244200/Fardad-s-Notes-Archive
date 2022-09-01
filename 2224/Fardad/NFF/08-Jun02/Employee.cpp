#include <iostream>
#include "Employee.h"
#include "Utils.h"
using namespace std;

namespace sdds {


   void Employee::display() {
      cout << "Name: " << m_name << "(" << m_empId
         << "), Salary: " << m_salary << endl;
   }

   void Employee::hire() {
      cout << "Name: ";
      // reads any char upto 40 chars, or \n whichever comes fist 
      // then it eats the \n and throws it away.
      cin.getline(m_name, 41, '\n');
      m_salary = U.getDouble("Salary: ");
      m_empId = U.getInt("Employee ID: ");
   }













}