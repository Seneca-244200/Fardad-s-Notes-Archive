#include <iostream>
#include "Container.h"
using namespace std;
namespace seneca {

   Container::Container( int value) {
      m_value = value;
   }
   // left side effect
   Container& Container::operator+=( int value ) {
      m_value += value;
      return *this;
   }

   Container Container::operator+( int value ) const {
      Container ret( value + m_value );
      return ret;
   }

   Container& Container::operator++( ) {
      m_value++;
      return *this;
   }

   // the int means nothing but postfix!!!
   Container& Container::operator++( int ) {
      m_value++;
      return *this;
   }

   /// <summary>
   /// returns a new container with the sum of values
   /// </summary>
   /// <param name="other">const Container &amp; </param>
   /// <returns>Container</returns>
   Container Container::operator+( const Container& other )const {
      Container ret( m_value + other.m_value );
      return ret; // never return reference of a local variable
   }
   Container& Container::operator=( int value ) {
      m_value = value;
      return *this;
   }
   ostream& Container::display( )const {
      return cout << "Cnt-" << m_value;
   }
   // Rigth and left side effect!!!
   int Container::operator>>( Container& other ) {
      other.m_value = m_value;
      m_value = 0;
      return other.m_value;
   }

   Container::operator int( ) const {
      return m_value;
   }

   Container& Container::operator-=( int value ) {
      m_value -= value;
      return *this;
   }


}