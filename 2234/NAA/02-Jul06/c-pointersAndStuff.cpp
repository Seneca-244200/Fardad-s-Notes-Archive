#include <iostream>
using namespace std;
class Employee {
   char m_name[50];
   int m_empno;
public:
   Employee( );
   Employee* clone( ) {
      Employee* cl = nullptr;
      if ( whatever ) {
         cl = new Employee( *this );
      }
      return cl;
   }
   void setId( int a ) {
      m_empno = a;
   }
};
int getInt( ) {
   int value;
   cin >> value;
   return value;
}

int main( ) {
   Employee E;
   Employee* p = new Employee;
   cout << "Welcome to 02-Jul06NAA" << endl;
   // use the *p;
   delete p;
   E.setId( 1000 ); // E.setId(int a = 1000);
   return 0;
}

