#include "Double.h"
namespace sdds {
   Double::Double( ) {
      m_value = 0.0;
   }
   Double::Double( double value ) {
      m_value = value;
   }
   double Double::value( ) const {
      return m_value;
   }
   Double& Double::operator+=( const Double& RightOperand ) {
      // *this is LeftOperand
      m_value += RightOperand.m_value;
      return *this;
   }
   Double Double::operator+( const Double& RightOperand ) const {
      Double res( m_value + RightOperand.m_value );
      return res;
   }
   Double Double::operator/( const Double& RO ) const {
      Double res( m_value / RO.m_value );
      return res;
   }
   Double Double::operator-( ) const {
      return Double( -m_value);
   }
   std::ostream& Double::print( std::ostream& ostr ) const{
      return ostr << m_value;
   }
   std::istream& Double::read( std::istream& istr ) {
      return istr >> m_value;
   }
   Double operator+( double leftOperand, const Double& rightOperand ) {
      Double res( leftOperand + rightOperand.value( ) );
      return res;
   }
   std::ostream& operator<<( std::ostream& leftOperand, const Double& rightOperand ) {
      return rightOperand.print( leftOperand );
   }
   std::istream& operator>>( std::istream& istr, Double& rightOperand ) {
      return rightOperand.read( istr );
   }
}