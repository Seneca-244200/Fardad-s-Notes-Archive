#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include "MyStr.h"
using namespace std;
using namespace seneca;
void printStr( MyStr  S ) {
   cout << S << endl;
}
int main( ) {
   char cfullname[90]{};
   MyStr name = "Fred ";
   //MyStr name("Fred ");
   //MyStr name{ "Fred " };
 /*  MyStr surname{ "Soleymanloo", 5 };*/
   MyStr surname("Soleymanloo", 5 );
   MyStr fullname;
   fullname = name + surname;
   cout << fullname << endl;
   fullname = "Frank " + surname;
   cout << fullname << " is " << size_t(fullname) << " characters long" << endl;
   strcpy( cfullname, fullname );
   cout << cfullname << endl;
   for ( size_t i = 0; i < size_t( fullname )+10; i++ ) {
      cout << fullname[i];
   }
   cout << endl;
   return 0;
}