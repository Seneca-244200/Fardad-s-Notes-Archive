#include <iostream>
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
   Employee& operator+=( double value ) {
      if ( value > 0 ) {
         m_salary += value;
      }
      return *this;
   }
   //friend double operator+( double leftArg, const Employee& E );
};
double operator+(double leftArg, const Employee& E ) {
   leftArg += E.salary();
   return leftArg;
}
int main( ) {
   Employee E;
   double money = 1000;
   double total;
   E += 2000;
   E.operator+=( 2000 );
   total = money + E;

   return 0;
}