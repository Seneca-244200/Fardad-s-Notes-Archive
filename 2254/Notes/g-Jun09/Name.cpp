#include "cstr.h"
#include "Name.h"

namespace seneca {
   Name::Name( const char* value ) {
      m_value[0] = char( 0 );
      if ( value ) {
         seneca::strcpy( m_value, value, MaxNameLength );
      }

   }
   // Todo: make this safe:
   Name& Name::operator+=( const char* value ) {
      seneca::strcat( m_value, value );
      return *this;
   }

   // Todo: make this safe:
   Name& Name::operator+=( const Name& other ) {
      seneca::strcat( m_value, other.m_value );
      return *this;
   }

   // Todo: make this safe:
   Name& Name::operator++( int ) {
      seneca::strcat( m_value, " " );
      return *this;
   }

   // Todo: make this safe:
   Name& Name::operator++( ) {
      char temp[128] = " ";
      strcat( temp, m_value );
      strcpy( m_value, temp );
      return *this;
   }

   Name Name::operator+( const Name& other ) const {
      Name Both = *this;
      return Both += other;
   }

   char Name::operator[]( size_t index ) const {
      char ret = ' ';
      if ( m_value[0] != 0 ) {
         ret = m_value[index % MaxNameLength];
      }
      return ret;
   }

   std::ostream& Name::display( std::ostream& ostr )const {
      return ostr << m_value;
   }

   std::istream& Name::read( std::istream& istr ) {
      return istr.getline( m_value, MaxNameLength + 1 );
   }

   Name::operator int( ) const {
      return strlen( m_value );
   }

   std::ostream& operator<<( std::ostream& left, const Name& right ) {
      return right.display( left );
   }

   std::istream& operator>>( std::istream& left, Name& right ) {
      return right.read( left );
   }

   Name operator+( char left, const Name& right ) {
      char cstr[2] = " ";
      cstr[0] = left;
      Name toReturn = cstr;
      toReturn += right;
      return toReturn;
   }

   Name operator+( const char* left, const Name& right ) {
      Name toRet( left );
      toRet += right;
      return toRet;
   }

   //// Please don't do this:
   //Name operator+( char left, const Name& right ) {
   //   Name N;
   //   N.m_value[0] = left;
   //   N.m_value[1] = char( 0 );
   //   N += right;
   //   return N;
   //}
}