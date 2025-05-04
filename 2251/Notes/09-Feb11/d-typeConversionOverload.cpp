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
   // type conversion operator
   // if the container needs to be cased to an int
   // implement this:
   // typecast overloads do not have return type, because they are the indicating the return type in the cast operation
   operator int( )const { 
      return m_value;
   }

};

Container& Container::operator-=( int value ) {
   m_value -= value;
   return *this;
}



int main( ) {
   Container A = 20, B;
   int value;
   
   value = (int)A;

   cout << "The value of A is " << value << endl;
    
   value = B;

   cout << "The value of B is " << value << endl;

   return 0;
}