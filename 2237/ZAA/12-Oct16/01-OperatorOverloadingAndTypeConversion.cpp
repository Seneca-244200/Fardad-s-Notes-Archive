#include <iostream>
#include <fstream>
#include "Utils.h"
using namespace std;
class Container {
   int m_data{};
public:
   // Container( ) = default; if I want the compiler to create the default anyway
   Container( ) {
      cout << "Defaulting!" << endl;
   }
   Container( int value ) {
      m_data = value;
      cout << "Creating!" << endl;
   }
   Container(const Container& C ) {
      m_data = C.m_data;
      cout << "Copying!" << endl;
   }
   ~Container( ) {
      cout << "killing!" << endl;
   }
   Container operator+( int value )const {
      Container temp( m_data + value );
      return temp;
   }
   Container& operator+=( int value ) {
      m_data += value;
      return *this;
   }
   istream& read( istream& istr = cin ) {
      return istr >> m_data;
   }
   operator int( )const {
      return m_data;
   }
   operator bool( )const {
      return m_data != 0;
   }
};
ostream& operator<<( ostream& ostr, const Container& Ro ) {
   return ostr <<  int(Ro) ;
}
istream& operator>>( istream& istr, Container& Ro ) {
   return Ro.read( istr );
}


int main( ) {
   int a{ 20 }, b{ 30 };
   Container C, B, D;
   B = C + a;
   D = B += C;
   a = C + b;
   cout << D << endl;
   return 0;
}