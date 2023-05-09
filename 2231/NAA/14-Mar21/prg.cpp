#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
class Base {
   int m_data;
public:
   Base( int data = 1 ) :m_data{ data } {
      cout << "Create Base " << m_data << endl;
   }
   Base( const Base& B ) {
      m_data = B.m_data;
      cout << "Base copy " << m_data << endl;
   }
   Base& operator=( const Base& B ) {
      m_data = B.m_data;
      cout << "Base assign " << m_data << endl;
      return *this;
   }
   virtual ~Base( ) {
      cout << "Del Base " << m_data << endl;
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
//   Derived( float data = 2.2 ) :Base(int( data )), m_data(data) {
   Derived( float data = 2.2 ) :Base{ int( data ) }, m_data{ data } {
      cout << "   Create Der " << m_data << endl;
   }
   Derived( const Derived& D ):Base(D) {
      m_data = D.m_data;
      cout << "   Copy Der " << m_data << endl;
   }
   Derived& operator=( const Derived& D ) {
      Base::operator=( D );
      m_data = D.m_data;
      cout << "   Der Assign " << m_data << endl;
      return *this;
   }
   ostream& print( ostream& out )const {
      Base::print( out );
      return out << "D(" << m_data << ")";
   }
   virtual ~Derived( ) {
      cout << "   Del Der " << m_data << endl;
   }
};
void prn( Derived dr ) {
   cout << dr << endl;
}
int main( ) {
   cout << "-------------------" << endl;
   Derived  D = 123.456, A;
   cout << "-------------------" << endl;
   prn( D );  // prn (Derived dr = D)
   cout << "-------------------" << endl;
   A = D;
   cout << "-------------------" << endl;
   cout << A << endl;
   cout << "-------------------" << endl;
   return 0;
}