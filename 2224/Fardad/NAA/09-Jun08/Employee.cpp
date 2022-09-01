#include <iostream>
#include "Employee.h"
#include "Utils.h"
using namespace std;
namespace sdds {

   void Employee::hire() {
      read();
   }

   std::istream& Employee::read(std::istream& istr ) {  // hires only one
      cout << "Name: ";   
      m_name.read(istr);
      m_salary = U.getDouble("Salary: ");
      m_empId = U.getInt("ID: ");
      return istr;
   }
   std::ostream& Employee::display(std::ostream& ostr)const {
      if (!m_name.isEmpty()) {
         ostr << "Name: ";
         m_name.display(ostr) << "(" << m_empId
            << "), Salary: " << m_salary;
      }
      else {
         ostr << "Empty Employee!";
      }
      return ostr;
   }


}