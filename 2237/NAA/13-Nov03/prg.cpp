#include <iostream>
#include "String.h"
#include "Utils.h"
using namespace std;
using namespace sdds;
class AgeCorrection {
   int& m_age;
   String m_title = "No Name!";
public:
   AgeCorrection( int age );
   AgeCorrection( int age, const char* title );
   void max( int value ) {
      if ( m_age > value ) m_age = value;
   }
   void min( int value ) {
      if ( m_age < value ) m_age = value;
   }
};
AgeCorrection::AgeCorrection( int age):m_age( age ) {
}
AgeCorrection::AgeCorrection( int age, const char* title ) :m_age( age ), m_title(title) {
}
int main(){
   int age;
   cout << "Enter the age\n> ";
   cin >> age;
   AgeCorrection cAge( age );
   cAge.max( 70 );
   cAge.min( 18 );
   cout << "the corrected age is: " << age << endl;
   return 0;
}