#include <iostream>
#include <fstream>
#include "Utils.h"
using namespace std;
class Container;
ostream& operator<<( ostream& ostr, const Container& Ro );
int operator+(int value, const Container& Ro);
class Container {
   int m_data{};
public:
   // Container( ) = default; if I want the compiler to create the default anyway
   Container( ) {
      cout << "Defaulting!" << endl;
   }
   Container( int value) {
      m_data = value;
      cout << "Creating " << m_data << "!" << endl;
   }
   Container( const Container& C ) {
      cout << "Copying " << C.m_data << " over " << m_data << "!" << endl;
      m_data = C.m_data;
   }
   ~Container( ) {
      cout << "Removing " << m_data << "!" << endl;
   }
   Container& operator=( const Container& Ro ) {
      cout << "Assigning " << m_data << " to " << Ro.m_data << "!" << endl;
      m_data = Ro.m_data;
      return *this;
   }
   Container& operator+=( int value ) {
      cout << "Adding " << value << " to " << m_data << "!" << endl;
      m_data += value;
      return *this;
   }
   Container operator+( int value )const {
      Container temp( m_data + value );
      return temp;
   }
   Container operator+( const Container& Ro )const {
      Container temp = m_data + Ro.m_data ;
//      cout << "temp is " << temp << endl;
      return temp;
   }
   istream& read( istream& istr = cin ) {
      return istr >> m_data;
   }
   Container& operator++( ) {
      m_data++;
      return *this;
   }
   operator int( )const {
      return m_data;
   }
   operator bool( )const {
      return m_data != 0;
   }
};
ostream& operator<<( ostream& ostr, const Container& Ro ) {
   return ostr << int( Ro );
}
istream& operator>>( istream& istr, Container& Ro ) {
   return Ro.read( istr );
}


int main( ) {
   Container C{ 20 }, D{ 40 }, E;
   int a( 30 );
   E = D + C;
   ++(C += 10);
   cout << "C: " <<  C << endl;

   return 0;
}

