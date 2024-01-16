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
   void Employee::setInvalidState( ) {
      m_name = nullptr;
      m_empNo = -1;
      m_salary = 0.0;
   }
   Employee::Employee( ) {
      setInvalidState( );
   }
   Employee::Employee( const char name[], int empNo, double salary ) {
      if ( valid( name, empNo, salary ) ) {
         m_name = new char[strlen( name ) + 1];
         strcpy( m_name, name );
         m_empNo = empNo;
         m_salary = salary;
      }
      else {
         setInvalidState( );
      }
   }
   Employee::Employee( const char name[] ) {
      if ( name && name[0] ) {
         m_name = new char[strlen( name ) + 1];
         strcpy( m_name, name );
         m_empNo = 100000;
         m_salary = 0;
      }
      else {
         setInvalidState( );
      }
   }
   Employee::~Employee( ) {
      delete[] m_name;
   }
   bool Employee::isValid( ) const {
      return m_name;
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