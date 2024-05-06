#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
struct Name {
   char* m_name{};
   char* m_surname{};
};

void set( Name& n, const char* name, const char* surname );
void deallocate( Name& n );
void print( const Name& n );
void read( Name& n );
int main( ) {
   Name* names = nullptr;
   size_t num{};
   cout << "how many names?\n> ";
   cin >> num;
   names = new Name[num];
   print( names[0] );
   for ( size_t i = 0; i < num; i++ ) {
      read( names[i] );
   }

   for ( size_t i = 0; i < num; i++ ) {
      print( names[i] );
   }


   for ( size_t i = 0; i < num; i++ ) {
      deallocate(names[i]);
   }
   delete[] names;
   return 0;
}



void set( Name& n, const char* name, const char* surname ) {
   n.m_name = new char[strlen( name ) + 1];
   n.m_surname = new char[strlen( surname ) + 1];
   if ( n.m_name && n.m_surname ) {
      strcpy( n.m_name, name );
      strcpy( n.m_surname, surname );
   }
   else {
      delete[] n.m_name;
      delete[] n.m_surname;
      n.m_name = n.m_surname = nullptr;
   }
}
void deallocate( Name& n ) {
   delete[] n.m_name;
   delete[] n.m_surname;
   n.m_name = n.m_surname = nullptr;
}

void print( const Name& n ) {
   if ( n.m_name && n.m_surname ) {
      cout << n.m_name << " " << n.m_surname << endl;
   }
   else {
      cout << "No name!" << endl;
   }
}

void read( Name& n ) {
   char name[61];
   char surname[81];
   cout << "Name: ";
   cin >> name;
   cout << "Surname: ";
   cin >> surname;
   set( n, name, surname );
}
