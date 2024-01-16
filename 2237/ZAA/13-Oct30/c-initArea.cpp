#include <iostream>
#include "String.h"
using namespace sdds;
using namespace std;

class AgeCorrection {
   int &m_age;
   String m_correctionName = "No Name";
public:
   AgeCorrection( int& value );
   void max( int value ) {
      if ( m_age > value ) m_age = value;
   }
   void min( int value ) {
      if ( m_age < value ) m_age = value;
   }
   ostream& display( ostream& ostr = cout ) {
      return ostr << m_correctionName;
   }
};                                         
                                             // init area
AgeCorrection::AgeCorrection( int& value ) : m_age(value), m_correctionName("Seneca Bar Customer Age Correction"){
   m_age = value;
}

     
int main( ) {
   int age;
   cout << "Enter the age\n> ";
   cin >> age;
   AgeCorrection cAge( age );
   cAge.max( 70 );
   cAge.min( 18 );
   cAge.display( ) << endl;
   cout << "the age is corrected to " << age << endl;

   return 0;
}