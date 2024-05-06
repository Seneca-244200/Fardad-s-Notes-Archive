#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
struct Name {
   char* m_givenName{};
   char* m_surname{};
   void set(const char* name, const char* surname );
   void deallocate( ) { // inline coding
      delete[] m_givenName;
      delete[] m_surname;
      m_givenName = m_surname = nullptr;
   }
   void read() {
      char name[61];
      char surname[81];
      cout << "Name: ";
      cin >> name;
      cout << "Surname: ";
      cin >> surname;
      set( name, surname );
   }
   void print( )const {
      if ( m_givenName && m_surname && m_givenName[0] && m_surname[0] ) {
         cout << m_givenName << " " << m_surname << endl;
      }
      else {
         cout << "No name!" << endl;
      }
      // m_givenName = nullptr; cannot because print is const
   }
};
void Name::set( const char* name, const char* surname ) {
   m_givenName = new char[strlen( name ) + 1];
   m_surname = new char[strlen( surname ) + 1];
   if ( m_givenName && m_surname ) {
      strcpy( m_givenName, name );
      strcpy( m_surname, surname );
   }
   else {
      deallocate( );
   }
}


int main( ) {
   cout << "Welcome OOP244 NAA - 05,Jan23" << endl;
   Name* names = nullptr;
   size_t num{};
   cout << "how many names?\n> ";
   cin >> num;
   names = new Name[num];
   names[0].print(  );
   for ( size_t i = 0; i < num; i++ ) {
      names[i].read( );
   }

   for ( size_t i = 0; i < num; i++ ) {
      names[i].print( );
   }
   for ( size_t i = 0; i < num; i++ ) {
      names[i].deallocate( );
   }
   delete[] names;
   return 0;
}






