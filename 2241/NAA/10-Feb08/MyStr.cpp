#include <iostream>
#include "Utils.h"
#include "MyStr.h"
using namespace std;
namespace seneca {
   MyStr::MyStr( const MyStr& toCopy ) :m_data{ nullptr } {  // copy constructor
      if ( toCopy.m_data ) {
         m_data = new char[ut.strlen( toCopy.m_data ) + 1];
         ut.strcpy( m_data, toCopy.m_data );
      }
   }
    MyStr::MyStr( const char* cstr, size_t maxLen ):m_data(nullptr)  {
      ut.aloCopy( m_data, cstr, maxLen );
   }
   MyStr::MyStr( const char* cstr ) :m_data{ nullptr } {
      ut.aloCopy( m_data, cstr );
   }
   MyStr::MyStr( ) :m_data( nullptr ) { }

  
   MyStr& MyStr::operator=( const char* cstr ) {
      ut.aloCopy( m_data, cstr );
      return *this;
   }
   MyStr& MyStr::operator+=( const char* data ) {
      if ( data ) {
         char* temp = new char[(m_data ? ut.strlen( m_data ) : 0u) + ut.strlen( data ) + 1];
         ut.strcpy( temp, m_data );
         delete[] m_data;
         m_data = temp;
         ut.strcat( m_data, data );
      }
      return *this;
   }

   MyStr& MyStr::operator=( const MyStr& mstr ) { // copy assignment
      if ( this != &mstr ) {
         operator=( mstr.m_data );
      }
      return *this;
   }

   MyStr& MyStr::operator+=( const MyStr& mstr ) {
      return operator+=( mstr.m_data );
   }

   MyStr MyStr::operator+( const MyStr& rightOper ) const {
      MyStr result = *this;
      result += rightOper;
      return result;
   }

   MyStr& MyStr::operator--( ) {
      if ( m_data && m_data[0] ) {
         MyStr temp = &m_data[1];
         *this = temp;
      }
      return *this;
   }

   MyStr& MyStr::operator--( int ) {
      if ( m_data && m_data[0] ) {
         MyStr temp( m_data, ut.strlen( m_data ) - 1 );
         operator=(temp);  //same as line 41
      }
      return *this;
   }

   MyStr::operator const char* () const {
      return m_data;
   }

   MyStr::operator size_t( ) const {
      return m_data ? ut.strlen( m_data ) : size_t( 0 );
   }

   char& MyStr::operator[]( size_t index ) {
      return m_data[index % size_t( *this )];
   }

   MyStr::~MyStr( ) {
      delete[] m_data;
   }
   ostream& MyStr::print( std::ostream& ostr ) const {
      return ostr << (m_data ? m_data : "");
   }
   std::istream& MyStr::read( char delimiter, std::istream& istr ) {
      ut.getDynCstr( m_data, istr, delimiter );
      return istr;
   }
   MyStr operator+( const char* cstr, const MyStr& right ) {
      MyStr result = cstr;
      result += right;
      return result;
   }
   std::ostream& operator<<( std::ostream& ostr, const MyStr& str ) {
      return str.print( ostr );
   }
}