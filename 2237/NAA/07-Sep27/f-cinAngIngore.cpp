#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
int main( ) {
   cout << "Welcome to OOP244 NAA 06-Sep27!" << endl;
   int a;
   double d;
   char str[256]{};
   cout << "int: ";
   cin >> a;
   cout << "double: ";
   cin >> d;
   cout << "cstr: ";
   cin >> str;
   cin.ignore( 10000, '\n' ); // flush
   cout << "int: ";
   cin >> a;
   cout << "double: ";
   cin >> d;
   cout << "a: " << a << " d: " << d << endl;
   if ( cin.fail( ) ) {
      cout << "failed reading!" << endl;
   }
   else {
      cout << "Everything ok!" << endl;
   }
   return 0;
}