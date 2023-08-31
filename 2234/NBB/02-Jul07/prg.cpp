#include <iostream>
#include <fstream>
using namespace std; 
class Student {
   char* m_name{};
   unsigned m_stno{};
   double m_gpa{};
public:
   Student( ) = default; // creats an empty default constructor
   Student( const char* name, unsigned student_no );
   Student( unsigned stno );

   Student& operator+=( double value );

   double gpa( )const {
      return m_gpa;
   }
   //friend double operator+( double gpa, const Student& S );
   ostream& write( ostream& ostr = std::cout )const {
      if ( m_name ) {
         ostr << m_name << ", " << m_stno << " (" << m_gpa << ")";
      }
      return ostr;
   }
};
ostream& operator<<( ostream& ostr, const Student& S ) {
   return S.write( ostr );
}
double operator+( double gpa, const Student& S ) {
   return gpa += S.gpa( );
}
void write( Student S , ofstream& file) {
   file << S << endl;
}
int main( ) {
   ofstream file( "stduent.txt" );
   Student S( "Fred", 12345 );
   S.write( );
   S.write( file );
   cout << S << endl;
   write( S, file );
   return 0;
}