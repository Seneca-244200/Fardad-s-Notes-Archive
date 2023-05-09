#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
class Base {
   int m_data;
public:
   Base( int data = 1 ) :m_data{ data } { 
      cout << "Def Base " << endl;
   }
   Base( const Base& B ) {
      m_data = B.m_data;
      cout << "Base copy " << endl;
   }
   Base& operator=( const Base& B ) {
      m_data = B.m_data;
      cout << "Base assign" << endl;
      return *this;
   }
   virtual ~Base( ) {
      cout << "Del Base "<< endl;
   }
   virtual ostream& print( ostream& out )const {
      return out << "B(" << m_data << ")";
   }
};
ostream& operator<<( ostream& out, const Base& B ) {
   return B.print( out );
}
class Derived : public Base {
   float m_data;
public:
   Derived( float data = 2.2 ) :Base( int( data ) ), m_data{ data } {
      cout << "   Def Der " << endl;
   }
   ostream& print( ostream& out )const {
      Base::print( out );
      return out << "D(" << m_data << ")";
   }
   ~Derived( ) {
      cout << "   Del Der " << endl;
   }
};

void prn( Derived cp ) {
   cout << "prn:" << cp << endl;
}

int main() {
   Derived A, B(20);
   cout << "-------------------" << endl;
   prn( A );
   cout << "-------------------" << endl;
   A = B;
   cout << "A:" << A << endl;
   cout << "-------------------" << endl;

   return 0;
}