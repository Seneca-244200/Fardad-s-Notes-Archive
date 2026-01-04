#include <iostream>
#include "cstr.h"
#include "Assessment.h"
using namespace std;
namespace seneca {
   Assessment::Assessment( ) {
      m_title = nullptr;
      m_mark = 0;
   }
   Assessment::Assessment( const char* title ) {
      m_title = nullptr;
      //if ( title != nullptr ) { // if not empty then allocate and copy
      //   m_title = new char[strlen( title ) + 1];
      //   strcpy( m_title, title );
      //}
      set( title, 100 );
   }
   Assessment::Assessment( const char* title, int mark ) {
      m_title = nullptr;
      set( title, mark );
   }
   Assessment::~Assessment( ) {
      cout << "The following Assessement is about to die:" << endl;
      print( );
      delete[] m_title;
   }
   bool Assessment::isEmpty( ) const {
      return m_title == nullptr;
   }
   void Assessment::set( ) {
      cout << "Assessment Name\n> ";
      cin.getline( m_title, 128 );
      cout << "Assessment Mark\n> ";
      cin >> m_mark;
   }

   void Assessment::set( const char* title, int mark ) {
      delete[] m_title;
      m_title = nullptr;
      if ( title ) { // same as m_title != nullptr
         m_title = new char[strlen( title ) + 1];
         strcpy( m_title, title );
      }
      m_mark = mark;
   }

   void Assessment::print( )const {
      if ( isEmpty( ) ) {
         cout << "Assessment is empty!" << endl;
      }
      else {
         cout << m_title << " (mark: " << m_mark << ")" << endl;
      }
   }

}