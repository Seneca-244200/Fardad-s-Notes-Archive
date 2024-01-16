#include <iostream>
#include <fstream>
#include "Utils.h"
using namespace std;
class Label;  // forward declration

ostream& operator<<( ostream& ostr, const Label& L );
istream& operator>>( istream& istr, Label& L );

class Label {
   char* m_text{};
public:
   Label( ) {
      clog << "Defaulting  Label" << endl;
   };
   Label( const Label& cp ) {// Copy Constructor
      clog << "Copying " << cp << endl;
      operator=( cp.m_text );
   }
   Label( const char* text ) {
      operator=( text );
      clog << "Created " << *this << endl;
   }
   ~Label( ) {
      clog << "Removing " << *this << endl;
      delete[] m_text;
   }
   Label& operator=( const char* text ) {
      delete[] m_text;
      if ( text ) {
         m_text = new char[sdds::strlen( text ) + 1];
         sdds::strcpy( m_text, text );
      }
      else {
         m_text = nullptr;
      }
      return *this;
   }
   //Label& operator= (const Label&) = delete;
   Label& operator=( const Label& RO ) { // Copy Assignment
      clog << "Assignming" << *this << " to " << RO << endl;
      return operator=( RO.m_text );
   }
   ostream& print( ostream& ostr = cout )const {
      return ostr << ">" << (m_text ? m_text : "") << "<";
   }
   istream& read( istream& istr = cin ) {
      char text[1024];
      istr.getline( text, 1024 );
      //*this = text; same as below
      operator=( text );
      return istr;
   }

};

ostream& operator<<( ostream& ostr, const Label& L ) {
   return L.print( ostr );
}
istream& operator>>( istream& istr, Label& L ) {
   return L.read( istr );
}
void showLable( Label& L ) {
   cout << "Showing the lable " << L << endl;
}
int main( ) {
   //clog.setstate( ios::failbit );
   Label L = "LLL LLL LLL";
   Label M = L;
   Label N = "NNN NNN NNN";
   cout << "L: " << L << endl;
   cout << "M: " << M << endl;
   cout << "N: " << N << endl;
   N = L;
   cout << "L: " << L << endl;
   cout << "M: " << M << endl;
   cout << "N: " << N << endl;
   showLable( L );
   showLable( M );
   showLable( N );

   return 0;
}