#include <iostream>
#include "Employee.h"
#include "Utils.h"

namespace sdds {
   bool Employee::valid( const char name[], int empNo, double salary ) {
      bool res = true;
      if ( name == nullptr || name[0] == 0 ) {
         res = false;
      }
      if ( empNo < 100000 || empNo > 999999 ) {
         res = false;
      }
      if ( salary <= 0 ) {
         res = false;
      }
      return res;
   }
   bool Employee::isValid( ) const {
      return m_empNo > 0;
   }
   void Employee::init(  const char name[], int empNo, double salary ) {
      if ( valid( name, empNo, salary )) {
         strcpy( m_name, name, 25 );
            m_empNo = empNo;
            m_salary = salary;
      }
      else {
         m_empNo = -1;
      }
   }
   void Employee::display( )const {
      if ( isValid( ) ) {
         std::cout << m_name << ": " << m_empNo << ", " << m_salary << std::endl;
      }
      else {
         std::cout << "Invalid Employee object!" << std::endl;
      }
   }
   bool Employee::salary( double value ) {
      bool res = false;
      if ( value > 0 ) {
         m_salary = value;
         res = true;
      }
      return res;
   }
}