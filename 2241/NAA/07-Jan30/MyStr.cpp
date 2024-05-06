#include <iostream>
#include "Utils.h"
#include "MyStr.h"
using namespace std;
namespace seneca {
   MyStr::MyStr( const char* cstr, size_t maxLen ):m_data(nullptr)  {
      
      if ( cstr ) {
         size_t len = ut.strlen( cstr );
         m_data = new char[(len < maxLen ? len : maxLen) + 1];
         ut.strcpy( m_data, cstr, maxLen );
      }
   }
   MyStr::MyStr( const char* cstr ) :m_data{ nullptr } {
      if ( cstr ) {
         m_data = new char[ut.strlen( cstr ) + 1];
         ut.strcpy( m_data, cstr );
      }
   }
   MyStr& MyStr::set( const char* cstr ) {
      delete[] m_data;
      m_data = nullptr;
      if ( cstr ) {
         m_data = new char[ut.strlen( cstr ) + 1];
         ut.strcpy( m_data, cstr );
      }
      return *this;
   }
   MyStr::MyStr( ) :m_data( nullptr ) { }

   MyStr::~MyStr( ) {
      delete[] m_data;
   }
   ostream& MyStr::print( ) const {
      return cout << (m_data ? m_data : "");
   }
}