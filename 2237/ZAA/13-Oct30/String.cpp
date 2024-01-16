
#include <iostream>
#include <string>
#include "String.h"
#include "Utils.h"
#include "debug.h"
using namespace std;
namespace sdds {
   void String::setEmpty( ) {
      m_data = nullptr;
      m_length = 0;
   }
   String::String( const char* cstr ) {
#ifdef  SDDS_DEBUG
      clog << "Creating String out of >" << (cstr ? cstr : "NOTHING") << "<" << endl;
#endif //  SDDS_DEBUG

      if ( cstr ) {
         m_length = U.strlen( cstr );
         m_data = new char[m_length + 1];
         U.strcpy( m_data, cstr );
      }
   }
   String::String( const String& S ) {
#ifdef  SDDS_DEBUG
      clog << "Copying  >" << (S ? S.m_data : "NOTHING") << "< into a new String" << endl;
#endif //  SDDS_DEBUG
      // make sure the DMA data pointer is null
      operator=( S );
   }
   String& String::operator=( const String& S ) {
      if ( this != &S ) {// only in copy assignment overload
         delete[] m_data;
         setEmpty( );
         if ( S ) {
            m_length = S.length( );
            m_data = new char[S.length( ) + 1];
            U.strcpy( m_data, S.m_data );
         }
      }
      return *this;
   }
   String::~String( ) {
#ifdef  SDDS_DEBUG
      clog << "Killing String containing >" << (m_data ? m_data : "NOTHING") << "<" << endl;
#endif //  SDDS_DEBUG
      delete[] m_data;
   }
   String::operator bool( )const {
      return m_data != nullptr;
   }
   size_t String::length( ) const {
      return m_length;
   }
   String& String::operator+=( const String& R ) {
      return operator+=( R.m_data );
   }
   String& String::operator+=( const char* cstr ) {
      if ( cstr ) {
         char* newM_data = new char[length( ) + U.strlen( cstr ) + 1];
         if ( *this ) {
            U.strcpy( newM_data, this->m_data );
         }
         else {
            newM_data[0] = 0;
         }
         U.strcat( newM_data, cstr );
         m_length += U.strlen( cstr );
         delete[] this->m_data;
         this->m_data = newM_data;
      }
      return *this;
   }
   String String::operator+( const String& Roperand ) const {
      return String(*this)+=Roperand;
   }
   String String::operator+( const char* cstr ) const {
      return String(*this )+=cstr;
   }
   char& String::operator[]( size_t index ) {
      char* elem = &m_garbage;
      if ( *this ) {
          elem = &m_data[index % m_length];
      }
      return *elem;
   }
   const char& String::operator[]( size_t index ) const {
      const char* elem = &m_garbage;
      if ( *this ) {
         elem = &m_data[index % m_length];
      }
      return *elem;
   }
   ostream& String::display( ostream& ostr )const {
      if ( *this ) {
         ostr << m_data;
      }
      return ostr;
   }
   istream& String::read( istream& istr ) {
      char temp[4096];
      istr.getline( temp, 4096 );
      if ( istr ) {
         delete[] m_data;
         m_length = U.strlen( temp );
         m_data = new char[m_length + 1];
         U.strcpy( m_data, temp );
      }
      /*
      string temp; // using the C++ string;
      getline( istr, temp );
      delete[] m_data;
      setEmpty( );
      operator+=( temp.c_str( ) );
      */
      return istr;
   }
   ostream& operator<<( ostream& ostr, const String& S ) {
      return S.display( ostr );
   }
   istream& operator>>( istream& istr, String& S ) {
      return S.read( istr );
   }
}