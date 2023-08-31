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
   Employee& operator+=( double value ) {
      if ( value > 0 ) {
         m_salary += value;
      }
      return *this;
   }
};
int main( ) {
   int a{ 3 };
   int b{ };
   double d[9000]{};
   Employee E{};
   Employee X{ "Fred Soley" };
   int* p{};
   int* q = (int*)0;
   int* r = nullptr;
   int* s = { nullptr };
   float f[5]{ 1.1,2.2,3.3 };

   return 0;
}