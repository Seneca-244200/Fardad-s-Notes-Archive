#include "Integer.h"
namespace sdds {
   Integer::Integer( int value ) {
      m_value = value;
   }
   Integer& Integer::operator=( int value ) {
      m_value = value;
      return *this;
   }
   Integer& Integer::operator+=(const Integer& rightOperand ) {
      // left operand is *this
      m_value += rightOperand.m_value;
      return *this;
   }
   Integer Integer::operator+( const Integer& RO )const {
      Integer res( m_value + RO.m_value );
      return res;
   }
   Integer Integer::operator-( ) const {
      // *this IS the operand
      Integer res( -m_value );
      return res;
   }
   std::ostream& Integer::print( std::ostream& ostr ) const{

      return ostr << m_value;
   }
   std::istream& Integer::read( std::istream& istr ) {
      return istr >> m_value;
   }
   int Integer::value( ) const {
      return m_value;
   }
   Integer& Integer::operator++( ) {
      m_value++;
      return *this;
   }
   Integer Integer::operator++( int ) {
      Integer oldValue = *this;
      m_value++;
      return oldValue;
   }
   Integer::operator int( ) const {
      return m_value;
   }
   Integer::operator double( ) const {
      return double( m_value );
   }
   Integer::operator const char* () const { // this is garbage, make it right!!!
      char* num = new char[10];
      num[0] = 'I';
      num[1] = 0;
      return num;
   }
   std::ostream& operator<<( std::ostream& ostr, const Integer& I ) {
      return I.print( ostr );
   }
   std::istream& operator>>( std::istream& istr, Integer& rightOperand ) {
      return rightOperand.read( istr );
   }
   Integer operator+( int leftOperand, const Integer& rightOprand ) {
      Integer result( leftOperand + rightOprand.value());
      return result;
   }
}
