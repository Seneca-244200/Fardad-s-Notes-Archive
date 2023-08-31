#include "Utils.h"
#include "Name.h"
namespace sdds {
   Name::Name(const char* value ) {
      if ( value && value[0] ) {
         ut.aloCpy( m_value, value );
      }
   }
   Name::Name( const Name& N ) {
      operator=( N );
      //*this = N;
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
      return ostr << (m_value ? m_value: "No Name");
   }
   std::ostream& operator<<( std::ostream& leftOperand, const Name& rightOperand ) {
      return rightOperand.write( leftOperand );
   }
}
