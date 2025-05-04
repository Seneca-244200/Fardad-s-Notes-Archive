#include <iostream>
using namespace std;
class Container {
   int m_value;
public:
   Container( int value = 0 ) {
      m_value = value;
   }
   // left side effect
   Container& operator+=( int value ) {
      m_value += value;
      return *this;
   }

   Container& operator-=( int value );


   Container& operator++( ) {
      m_value++;
      return *this;
   }

   Container& operator++( int ) {// the int means nothing but postfix!!!
      m_value++;
      return *this;
   }

   Container operator+( const Container& other ) {
      Container ret( m_value + other.m_value );
      return ret; // never return reference of a local variable
   }
   Container& operator=( int value ) {
      m_value = value;
      return *this;
   }
   ostream& display( )const {
      return cout << "Cnt(" << m_value << ")";
   }
   // Rigth and left side effect!!!
   int operator>>( Container& other ) {
      other.m_value = m_value;
      m_value = 0;
      return other.m_value;
   }


   Container operator-( )const {
      Container toReturn( -m_value );
      return toReturn;
   }


};

Container& Container::operator-=( int value ) {
   m_value -= value;
   return *this;
}



int main( ) {
   Container A = 20, B;

   cout << "A: ";
   A.display( ) << endl;
   cout << "B: ";
   B.display( ) << endl;

   B = -A;
   // B = A.operator-()const;

   cout << "A: ";
   A.display( ) << endl;
   cout << "B: ";
   B.display( ) << endl;

   return 0;
}