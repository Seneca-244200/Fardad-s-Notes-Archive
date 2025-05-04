#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Person {
   char* m_name;
   size_t m_age;
   void init() {
      m_name = nullptr;
   }
   void init(  const char* name, size_t age ) {
      m_name = new char[strlen( name ) + 1];
      strcpy( m_name, name );
      m_age = age;
   }

   void free( ) {
      delete[] m_name;
      m_name = nullptr;
   }

public:

   Person( ) {  // default constructor, no-arg constructor
      init( );
   }
   Person( const char* name, size_t age  = 18) {  // 2-arg constructor
      init( name, age );
   }
   ~Person( ) {
      free( );
   }
   void display( ) {
      if ( m_name ) {
         cout << m_name << " is " << m_age << " years old!" << endl;
      }
      else {
         cout << "No Data in Person!" << endl;
      }
   }
   void addToName( const char* name ) {
      char* temp = new char[strlen( m_name ) + strlen( name ) + 1];
      strcpy( temp, m_name );
      strcat( temp, name );
      delete[] m_name;
      m_name = temp;
   }

};


int main( ) {
   cout << "OOP244 NAA - Jan 28" << endl;
   Person P("Fred", 50);
   P.display( );
   P.addToName( " Soley" );
   P.display( );
   return 0;
}