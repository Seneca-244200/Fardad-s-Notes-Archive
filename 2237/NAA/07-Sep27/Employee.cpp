#include <iostream>
#include "Employee.h"
#include "Utils.h"
using namespace std;
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

   ostream& Employee::display(ostream& ostr )const {
      if ( isValid( ) ) {
         ostr << m_name << ": " << m_empNo << ", " << m_salary;
      }
      else {
         ostr << "Invalid Employee object!" ;
      }
      return ostr;
   }
   bool Employee::salary( double m_salaray ) {
      bool res = false;
      if ( m_salary > 0 ) {
//         this->m_salary = m_salary;
         (*this).m_salary = m_salary;
         res = true;
      }
      return res;
   }

   std::istream& Employee::read( std::istream& istr ) {
      char name[256];
      delete[] m_name;

      cout << "Name:";
      //istr >> name;
      istr.getline( name, 256 ,'\n' );
      m_name = new char[strlen( name ) + 1];
      strcpy( m_name, name );
      cout << "Employee No: ";
      istr >> m_empNo;
      cout << "Salary: ";
      istr >> m_salary;
      return istr;
   }

}