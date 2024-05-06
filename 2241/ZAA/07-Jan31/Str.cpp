#include <iostream>
#include "Utils.h"
#include "Str.h"
using namespace std;
namespace seneca {
   Str::Str( ) :m_data{ nullptr }{ }  // m_data is initialized
   Str::Str( const char* data ):m_data(nullptr){   // m_data is initialized
      if ( data ) { // DMA
         ut.aloCopy(m_data, data);
      }
   }
   Str::Str( const char* data, size_t len ) {
      m_data = nullptr;  // m_data is set to nullptr
      if ( data ) {
         ut.aloCopy( m_data, data, len );
      }
   }
   Str::~Str( ) {
      delete[] m_data;
   }
   Str& Str::set( const char* data ) {
      delete[] m_data;
      m_data = nullptr;
      ut.aloCopy( m_data, data );
      return *this;
   }
   Str& Str::cat( const char* data ) {
      if ( data ) {
         char* temp = new char[(m_data?ut.strlen( m_data ):0) + ut.strlen( data ) + 1];
         ut.strcpy( temp, m_data );
         delete[] m_data;
         m_data = temp;
         ut.strcat( m_data, data );
      }
      return *this;
   }
   ostream& Str::print( ) const {
      return cout << (m_data?m_data:"");
   }
}