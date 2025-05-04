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
      return cout << "Cnt-" << m_value;
   }
   // Rigth and left side effect!!!
   int operator>>( Container& other ) {
      other.m_value = m_value;
      m_value = 0;
      return other.m_value;
   }


};

Container& Container::operator-=( int value ) {
   m_value -= value;
   return *this;
}



int main( ) {
   Container A = 20, B;
   int amountMoved;
   cout << "OOP244NAA 09-Feb11" << endl;
   // move all that is in A to B;

   cout << "trying to move A:";
   A.display( ) << " content to B:";
   B.display( ) << endl;
   amountMoved = A >> B;
   //amountMoved = A.operator>>(B); this is what is called when the above executes

   cout << "moved " << amountMoved << " from A to B" << endl;
   cout << "A: ";
   A.display( ) << endl;
   cout << "B: ";
   B.display( ) << endl;

   return 0;
}