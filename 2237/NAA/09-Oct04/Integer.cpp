#include "Integer.h"
namespace sdds {
   Integer::Integer( int value ) {
      m_value = value;
   }
   Integer& Integer::operator+=(const Integer& I ) {
      m_value += I.m_value;
      return *this;
   }
   Integer Integer::operator+( const Integer& RO )const {
      Integer res( m_value + RO.m_value );
      return res;
   }
   Integer Integer::operator-( ) const {
      Integer res( -m_value );
      return res;
   }
   std::ostream& Integer::print( std::ostream& ostr ) const{
      return ostr << m_value;
   }
   std::ostream& operator<<( std::ostream& ostr, const Integer& I ) {
      return I.print( ostr );
   }
}
