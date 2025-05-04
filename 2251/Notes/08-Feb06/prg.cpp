#include <iostream>
using namespace std;
class Container {
   int m_value;
public:
   Container( int value = 0 ) {
      m_value = value;
   }

   Container& operator+=( int value ) {
      m_value += value;
      return *this;
   }


   Container& operator++( ) {
      m_value++;
      return *this;
   }

   Container& operator++(int ) {// the int means nothing but postfix!!!
      m_value++;
      return *this;
   }

   /*  Container& operator*( int value ) { // this is nuts, don't do it!!!
      for ( int i = 0; i < value; i++ ) {
         cout << m_value << " ";
      }
      return *this;
   }*/

   Container operator+( const Container& other) {
      Container ret( m_value + other.m_value );
      return ret; // never return reference of a local variable
   }
   Container& operator-=( int value ) {
      m_value -= value;
      return *this;
   }
   Container& operator=( int value ) {
      m_value = value;
      return *this;
   }
   ostream& display( )const {
      return cout << "Cnt-" << m_value;
   }
};


int main( ) {
   Container C, B( 10 ), A( 20 );
//   C = A.operator+=( 40 );
   C = A += 40 ;
   cout << "C: ";
   C.display( ) << endl;
   cout << "A: ";
   A.display( ) << endl;

//   C = A.operator+( B );
   C = A + B;
   cout << "C: ";
   C.display( ) << endl;
   cout << "A: ";
   A.display( ) << endl;
   cout << "B: ";
   B.display( ) << endl;

   //   C = A.operator+( 900 );
   C = A + 900;
   cout << "C: ";
   C.display( ) << endl;
   cout << "A: ";
   A.display( ) << endl;
   cout << "B: ";
   B.display( ) << endl;


   C = ++A;
   cout << "C: ";
   C.display( ) << endl;
   cout << "A: ";
   A.display( ) << endl;

   C = A++;
   cout << "C: ";
   C.display( ) << endl;
   cout << "A: ";
   A.display( ) << endl;


   /*double a, b = 10.1;
   int c = 20;

   a = b + c;*/

  /* A = B * 10;*/

   return 0;
}