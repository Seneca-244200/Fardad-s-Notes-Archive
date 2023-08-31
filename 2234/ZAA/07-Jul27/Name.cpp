#include "Utils.h"
#include "Name.h"
namespace sdds {
   Name::Name( const char* value ) {
      if ( value && value[0] ) {
         ut.strAloCpy( m_value, value );
      }
   }
   Name::Name( const Name& N ) {
      operator=( N );
   }
   Name& Name::operator=( const Name& N ) {
      if ( this != &N ) {
         ut.reStrAloCpy( m_value, N.m_value );
      }
      return *this;
   }
   std::ostream& Name::write( std::ostream& ostr ) const {
      return ostr << (m_value ? m_value : "No Name");
   }
   std::istream& Name::read( std::istream& istr, char delim ) {
      delete[] m_value;
      m_value = ut.read( istr, delim );
      return istr;
   }
   Name::~Name( ) {
      delete[] m_value;
   }

}
