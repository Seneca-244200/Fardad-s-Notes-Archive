// this does not compile, 
// as a practice complete the code and you can
// offer it as contrubution with pull request
#include <iostream>
#include <fstream>
using namespace std;
class Employee {
   char* m_name{};
   int m_empno{};
   double m_salary{};
public:
   Employee( ) = default;
   Employee( const char* name );
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
   double salary( )const {
      return m_salary;
   }
   ostream& print( ostream& ostr = std::cout )const {
      if ( m_name ) {
         ostr << m_name << ", " << m_empno << " (" << m_salary << ")";
      }
      else {
         ostr << "Invalid Employee!";
      }
      return ostr;
   }
   Employee& operator+=( double value ) {
      if ( value > 0 ) {
         m_salary += value;
      }
      return *this;
   }
   //friend double operator+( double leftArg, const Employee& E );
};
ostream& operator << (ostream & ostr, const Employee & E) {
   return E.print( ostr );
}
double operator+(double leftArg, const Employee& E ) {
   leftArg += E.salary();
   return leftArg;
}
int main( ) {
   Employee E;
   ofstream file( "myflie" );
   double money = 1000;
   double total;
   E += 2000;
   E.operator+=( 2000 );
   total = money + E;
   cout << E << endl;
   E.print( );
   E.print( file );
   file << E << endl;
   return 0;
}