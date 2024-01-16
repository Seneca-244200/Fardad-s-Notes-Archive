#include <iostream>
#include "Employee.h"
#include "Utils.h"
namespace sdds {
   void Employee::init( ) {
      m_name = nullptr;
      m_empNo = -1;
      m_salary = 0.0;
   }
   void Employee::set( const char* name, int empNo, double salary ) {
      m_name = new char[strlen( name ) + 1];
      strcpy( m_name, name );
      m_empNo = empNo;
      m_salary = salary;
   }
   void Employee::display( ) const {
      std::cout << m_name << ": " << m_empNo << ", " << m_salary << std::endl;
   }
   void Employee::finalize( ) {
      delete[] m_name;
   }
}