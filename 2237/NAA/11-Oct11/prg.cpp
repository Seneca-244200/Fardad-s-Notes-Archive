#include <iostream>
#include <fstream>
#include "Utils.h"
using namespace std;
using namespace sdds;

class Label;
ostream& operator<<( ostream& ostr, const Label& L );
istream& operator>>( istream& istr, Label& L );
class Label {
   char* m_text{};
public:
   Label( ) {
      clog  << "Defaulting  Label" << endl;
   };
   Label( const char* text );
   Label( const Label& L ) {
      operator=( L.m_text );
      clog  << "copying" << L << endl;
   }
   ~Label( ) {
      clog << "Removing " << *this << endl;
      delete[] m_text;
   }
   Label& operator=( const Label& RO ) {
      clog  << "assigning " << *this << " to " << RO << endl;
      return operator=( RO.m_text );
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
   ostream& print( ostream& ostr = cout )const {
      return ostr << ">" << (m_text ? m_text:"") << "<";
   }
   istream& read( istream& istr = cin ) {
      char text[1024];
      istr.getline( text, 1024 );
      *this = text;
      return istr;
   }
};
Label::Label( const char* text ) {
   operator=( text );
   clog  << "Created " << *this << endl;
}

ostream& operator<<( ostream& ostr, const Label& L ) {
   return L.print( ostr );
}
istream& operator>>( istream& istr, Label& L ) {
   return L.read( istr );
}

void show( Label L ) {
   cout << "Showing " << L << endl;
}

Label getLabel( ) {
   Label temp;
   cout << "Enter lable value...\n> ";
   cin >> temp;
   return temp;   
}


int main( ) {
   Label A = "My Label";
   A = getLabel( );
   cout << A << endl;
   return 0;
}