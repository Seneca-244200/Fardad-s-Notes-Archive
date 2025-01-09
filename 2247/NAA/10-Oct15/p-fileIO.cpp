//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class PhoneNumber {
   char m_name[31]{};
   size_t m_number;
public:                                          //initalization area
   PhoneNumber( const char* name, size_t number ) :m_name{ name }, m_number( number ) {
      //m_name = name; crash
//      strcpy( m_name, name );
   }
   ostream& display( ostream& ostr = cout )const {
      ostr.width( 30 );
      ostr.setf( ios::left );
      ostr.fill( '.' );
      ostr << m_name;
      ostr.unsetf( ios::left );
      ostr.fill( ' ' );
      return ostr << m_number;
   }
   istream& read( istream& istr = cin ) {
      // Homer Simpson, 416552345<ENTER>
      istr.getline( m_name, 31, ',' );
      istr >> m_number;
      istr.ignore( 1000000, '\n' );
      return istr;
   }
};
ostream& operator<<( ostream& ostr, const PhoneNumber& P ) {
   return P.display( ostr );
}
istream& operator>>( istream& istr, PhoneNumber& P ) {
   return P.read( istr );
}


int main( ) {
   PhoneNumber P( "Fred Soley", 4165551234 );
   cout << P << endl;
   cout << "Enter phonenumber\n> ";
   cin >> P;
   cout << P << endl;
   ifstream file( "phones.csv" );
   ofstream outfile( "phones.txt" );
   while ( file ) {
      file >> P;
      if ( file ) {
         cout << P << endl;
         outfile << P << endl;
      }
   }
   return 0;
}