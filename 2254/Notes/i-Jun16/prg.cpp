#include <iostream>
#include <fstream>
using namespace std;

class PhoneNumber {
   char m_name[256]{};
   int m_area{};
   int m_rout{};
   int m_number{};
public:
   PhoneNumber( ) = default;
   bool read( ifstream& file ) {
      int area, rout, num;
      file >> area;
      file.ignore( );
      file >> rout;
      file.ignore( );
      file >> num;
      file.ignore( );
      file.getline( m_name, 256 );
      if ( file ) {
         m_area = area;
         m_rout = rout;
         m_number = num;
      }
      else {
         m_name[0] = char( 0 );
      }
      return !file.fail( );
   }
   ostream& display( ostream& ostr = cout ) {
      if ( m_name[0] ) {
         ostr.width( 30 );
         ostr.fill( '.' );
         ostr.setf( ios::left );
         ostr << m_name;
         ostr.fill( ' ' );
         ostr.unsetf( ios::left );
         ostr << "(" << m_area << ") " << m_rout << "-";
         ostr.width( 4 );
         ostr.fill( '0' );
         ostr.setf( ios::right );
         ostr << m_number;
         ostr.fill( ' ' );
         ostr.unsetf( ios::right );
      }
      return ostr;
   }
};
int main( ) {
   ifstream phones( "phones.csv" );
   ofstream formattedPhones( "fphones.txt" );
   PhoneNumber p;
 //  while ( phones >> p ){//  your work: overload >>
   while ( p.read( phones ) ) {
 //     cout << p << endl; // your work:: overload << 
      p.display( ) << endl; 
      p.display( formattedPhones ) << endl;
   }
   return 0;
}