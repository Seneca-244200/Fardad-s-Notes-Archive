

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
//struct Number {
//private:
//   int m_value;
//public:
//   void init( ) {
//      m_value = 0;
//   }
//   void add( int value ) {
//      m_value += value;
//   }
//   void display( ) {
//      cout << m_value << endl;
//   }
//
//};
class Number {

   int m_value;
public:
   void init( ) {
      m_value = 0;
   }
   void add( int value ) {
      m_value += value;
   }
   void display( ) {
      cout << m_value << endl;
   }

};
int main( ) {
   cout << "OOP244 NAA - Jan 28" << endl;
   Number n1, n2;
   n1.display( );
   n2.display( );
   n1.init( );
   n1.add( 200 );
   n1.display( );
   n2.init( );
   n2.add( 3000 );
  // n2.m_value += 5000;
   n2.display( );
   return 0;
}