#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Name.h"
using namespace std;
namespace seneca {
   void Name::set( const char* name, const char* surname ) {
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
   void Name::init( ) {
      m_givenName = m_surname = nullptr;
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

   void Name::finalize( ) {
      deallocate( );
   }
   
}