#include <iostream>
#include "VInt.h"
using namespace std;
namespace seneca {
   VInt::VInt( int value ) {
      m_value = value;
      m_min = value - 1;
      m_max = value + 1;
   }
   VInt::VInt( int value, int min, int max ) {
      m_value = value;
      set( min, max );
   }
   VInt& VInt::operator=( int value ) {
      m_value = value;
      return *this;
   }
   void VInt::set( int min, int max ) {
      m_min = min;
      m_max = max;
      if ( m_min > m_max ) {  // swap the two values if they are not ordered correclty
         max = m_min;
         m_min = m_max;
         m_max = max;
      }
   }

   int VInt::get( ) const {
      return m_value;
   }

   bool VInt::isValid () const{
      bool valid = true;
      if ( m_value <  m_min || m_value > m_max ) {
         valid = false;
      }
      return valid;
   }
   VInt& VInt::operator+=( const VInt& other ) {
      m_value += other.m_value;// changing the current object
      return *this; // return this object
   }
   VInt VInt::operator+( const VInt& other ) const {
      VInt ret = *this;
      return ret += other;
   }
   std::ostream& VInt::display( std::ostream& ostr )const {
      if ( isValid( ) ) {
         ostr << m_value;
      }
      else {
         ostr << "Invalid value " << m_value << endl;
      }
      return ostr;
   }
   bool VInt::operator<( const VInt& other ) const {
      return m_value < other.m_value;
   }
   int VInt::operator[]( int index ) const {
      int ret = 0;
      if ( index < 0 ) index = 0;
      if ( index > 2 ) index = 2;
      switch ( index ) {
      case 0:
         ret = m_min;
         break;
      case 1:
         ret = m_value;
         break;
      case 2:
         ret = m_max;
         break;
      }
      return ret;
   }
   int& VInt::operator[]( int index ) {
      int* ret = &m_min; // 0 by default
      if ( index < 0 ) index = 0;
      if ( index > 2 ) index = 2;
      if ( index == 1 ) {  // if 1
         ret = &m_value;
      }
      else if(index == 2){ 
         ret = &m_max;
      }
      return *ret;
   }
   VInt& VInt::operator++( ) {
      m_value++;
      return *this;
   }
   VInt VInt::operator++( int ) {
      VInt oldvalue = *this;
      m_value++;
      return oldvalue;
   }
   std::ostream& VInt::operator~( ) const {
      return display( );
   }
}