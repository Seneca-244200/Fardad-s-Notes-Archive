#include <iostream>
#include <fstream>
using namespace std;
class Student {
   char* m_name{};
   int m_stno{};
   double m_gpa{};
public:
   Student( ) = default;
   Student( const char* name, int stno );
   Student( int stno );
   Student& operator+= (double value) {
      if ( m_gpa + value <= 4.0 ) {
         m_gpa += value;
      }
      return *this;
   }
   double gpa( )const {
      return m_gpa;
   }
   //friend double operator+( double, const Student& S );

   ostream& print(ostream& ostr = std::cout )const{
      if ( m_name ) {
         ostr << m_name << ", " << m_stno << " (" << m_stno << ")";
      }
      else {
         ostr << "Invalid student object!";
      }
      return ostr;
   }
};
ostream& operator<<( ostream& ostr, const Student& S ) {
   return S.print( ostr );
}
double operator+( double val, const Student& S ) {
   return val += S.gpa( );
}

int main( ) {
   ofstream file( "std.txt" );
   Student S, A;
   double total{};
   A = S += 1.2;
   A = S.operator+=( 1.2 );

   total = total + A;

   cout << A << endl;
   A.print( file );
   file << A << endl;
   return 0;
}