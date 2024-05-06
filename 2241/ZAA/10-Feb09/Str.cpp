#include <iostream>
#include "Utils.h"
#include "Str.h"
using namespace std;
namespace seneca {
   Str::Str( ) :m_data{ nullptr }{ }  // m_data is initialized


   Str::Str( const char* data ):m_data(nullptr){   // m_data is initialized
      ut.aloCopy(m_data, data);
   }
   Str::Str( const char* data, size_t len ) {
      m_data = nullptr;  // m_data is operator= to nullptr
      ut.aloCopy( m_data, data, len );
   }
   Str::Str( const Str& toCopy ):m_data(nullptr){
      //operator=( toCopy );
      m_data = new char[ut.strlen( toCopy.m_data ) + 1];
      ut.strcpy( m_data, toCopy.m_data );
   }
   Str::~Str( ) {
      delete[] m_data;
   }


   Str& Str::operator=( const char* data ) {
      ut.aloCopy( m_data, data ); // must delete pre-existing data
      return *this;
   }

   Str& Str::operator+=( const char* data ) {
      if ( data ) {
         char* temp = new char[(m_data?ut.strlen( m_data ):0) + ut.strlen( data ) + 1];
         ut.strcpy( temp, m_data );
         delete[] m_data;
         m_data = temp;
         ut.strcat( m_data, data );
      }
      return *this;
   }
   Str& Str::operator=( const Str& str ) {
      if ( this != &str ) {
         operator=( str.m_data );  // potatos
         // *this = str.m_data;    // potaatos
      }
      return *this;
   }
   Str& Str::operator+=( const Str& str ) {
      operator+=( str.m_data ); // potatos

//    (*this) += str.m_data;     // potaatos

      return *this;
   }
   Str Str::operator+( const Str& rightOperand ) const {
      Str result = *this;
      result += rightOperand;
      return result;
   }
   Str::operator const char* () const {
      return m_data;
   }
   Str::operator size_t( ) const {
      return m_data ? ut.strlen( m_data ) : 0u;
   }
   char& Str::operator[]( size_t index ) {
      return m_data[index % size_t( *this )];
   }
   Str& Str::operator++(){
      Str temp = " ";
      temp += *this;
      operator=(temp);
      return *this;
   }
   Str& Str::operator++(int){
      operator+=(" ");
      return *this;
   }
   ostream& Str::print(ostream& ostr ) const {
      return ostr << (m_data?m_data:"");
   }
   std::istream& Str::read( char delimiter, std::istream& istr ) {
      ut.getCstr( m_data, istr , delimiter);
      return istr;
   }
   Str operator+( const char* cstr, const Str& str ) {
      /*Str result( cstr );
      result += str;
      return result;*/
      return Str( cstr ) += str;
   }
   std::ostream& operator<<( std::ostream& ostr, const Str& str ) {
      return str.print( ostr );
   }
   std::istream& operator>>( std::istream& ostr, Str& str ) {
      return str.read( '\n',ostr );
   }
}