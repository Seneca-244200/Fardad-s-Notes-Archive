#include <iostream>
#include <cstring>
using namespace std;
struct Person {
   char* m_name;
   size_t m_age;
};

void init( Person& P ) {
   P.m_name = nullptr;
}
void init( Person& P, const char* name, size_t age ) {
   P.m_name = new char[strlen( name ) + 1];
   strcpy( P.m_name, name );
   P.m_age = age;
}
void display( const Person& P ) {
   if ( P.m_name ) {
      cout << P.m_name << " is " << P.m_age << " years old!" << endl;
   }
   else {
      cout << "No Data in Person!" << endl;
   }
}
int main( ) {
   cout << "OOP244 NAA - Jan 28" << endl;
   Person P;
   init( P );
   display( P );
   return 0;
}