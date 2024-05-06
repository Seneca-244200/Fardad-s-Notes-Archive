#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace seneca {
   int counter = 0;
/* just explaining what this is 
*  this is stupid!!!!!
   void Name::set( const char* name, const char* m_surname ) {
      deallocate( );
      m_givenName = new char[strlen( name ) + 1];
      this->m_surname = new char[strlen( m_surname ) + 1];
      if ( m_givenName && this->m_surname ) {
         strcpy( m_givenName, name );
         strcpy( this->m_surname, m_surname );
      }
      else {
         deallocate( );
      }
   }
   */
   void Name::set( const char* name, const char* surname ) {
      deallocate( );
      m_givenName = new char[strlen( name ) + 1];
      m_surname = new char[strlen( surname ) + 1];
      if ( m_givenName && m_surname ) {
         strcpy( m_givenName, name );
         strcpy( m_surname, surname );
      }
      else {
         deallocate( );
      }
   }
   void Name::deallocate( ) { // inline coding
      delete[] m_givenName;
      delete[] m_surname;
      m_givenName = m_surname = nullptr;
   }
   void Name::read( ) {
      char name[61];
      char surname[81];
      cout << "Name: ";
      cin >> name;
      cout << "Surname: ";
      cin >> surname;
      set( name, surname );
   }
   Name::Name( ) {
      m_givenName = m_surname = nullptr;
      cout << "Name "  << ++counter << " is created!" << endl;
   }
   Name::~Name( ) {
      deallocate( );
      cout << "Name " << --counter << " is deleted!" << endl;
   }
   void Name::print( )const {
      if ( m_givenName && m_surname && m_givenName[0] && m_surname[0] ) {
         cout << m_givenName << " " << m_surname << endl;
      }
      else {
         cout << "No name!" << endl;
      }
      // m_givenName = nullptr; cannot because print is const
   }

   size_t Name::length( ) const {
      size_t len{ };
      if ( m_givenName && m_surname && m_givenName[0] && m_surname[0] ) {
         len = strlen( m_givenName ) + strlen( m_surname ) + 1;
      }
      return len;
   }
   
}