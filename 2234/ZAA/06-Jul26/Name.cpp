#include "Utils.h"
#include "Name.h"
namespace sdds {
   Name::Name( const char* value ) {
      if ( value ) {
         ut.aloCpy( m_value, value );
      }
      else {
         ut.aloCpy( m_value, "No Name" );
      }
   }

   Name::Name( const Name& N ) {
      operator=( N );
   }

   Name& Name::operator=( const Name& N ) {
      if ( this != &N ) {
         ut.reAloCpy( m_value, N.m_value );
      }
      return *this;
   }

   Name::~Name( ) {
      delete[] m_value;
   }
   std::ostream& Name::write( std::ostream& ostr ) const {
      return ostr << m_value;
   }

   //std::istream& Name::read( std::istream& istr ) {
   //   char buffer[1001];
   //   istr.getline( buffer, 1001 );
   //   if ( istr ) {
   //      ut.reAloCpy( m_value, buffer );
   //   }
   //   else {
   //      istr.clear( );
   //      istr.ignore( 10000, '\n' );
   //      ut.reAloCpy( m_value, "No Name" );
   //   }
   //   return istr;
   //}
   std::istream& Name::read( std::istream& istr ) {
      char* value = ut.getDynStr(istr);
      if ( !value ) {
         ut.aloCpy( value, "No Name" );
      }
      return istr;
   }
   std::ostream& operator<<( std::ostream& leftOperand,
      const Name& rightOperand ) {
      return rightOperand.write( leftOperand );
   }
   std::istream& operator>>( std::istream& leftOperand, Name& rightOperand ) {
      return rightOperand.read( leftOperand );
   }
}
