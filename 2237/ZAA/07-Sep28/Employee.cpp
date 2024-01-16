#include <iostream>
#include "Employee.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   Employee::Employee( ) { // default constructor
                           // no-arg constructor
      cout << "Creating default Employee" << endl;
      init( );
   }
   // Same arg name as attribute name is bad practice, 
   // I am doing this to teach "this"
   Employee::Employee( const char* m_name ) {
      (*this).m_name = new char[strlen( m_name ) + 1];
      strcpy( this->m_name, m_name );
      m_empNo = 0;
      m_salary = 0;
      cout << "Creating ";
      display( ) << endl;
      //Employee( name, 0, 0 ); //INCORRECT!, this created a temproray nameless Employee
                              // that will die right after line 18
   }

   Employee::Employee( const char* name, int empNo, double salary ) {
      init( );
      set( name, empNo, salary );
      cout << "Creating ";
      display( )<<endl;
   }
   
   Employee::~Employee( ) {
      cout << "Killing " << m_name << endl;
      deallocate( );
   }
   // Employee's init()
   void Employee::init( ) { //  sets the Employee to a recognizable
      m_name = nullptr;     // empty state
      m_empNo = -1;
      m_salary = -1.0;
   }

   Employee& Employee::set( const char* name, int empNo, double salary ) {
      deallocate();  // if m_name is nullptr, nothing happend (all good)
      m_name = new char[strlen( name ) + 1];
      strcpy( m_name, name );
      m_empNo = empNo;
      m_salary = salary;
      return *this;
   }
   ostream& Employee::display(ostream& ostr ) const {
      if ( m_name != nullptr ) {
         ostr << m_name << ": " << m_empNo 
            << ", " << m_salary;
      }
      else {
         ostr << "Unset Employee Object" ;
      }
      return ostr;
   }
   void Employee::deallocate( ) {
      delete[] m_name;
      m_name = nullptr;  // everytime you delete a pointer
                         // you must set it to null;
   }
}