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
   cin.ignore( );
   cout << "cstr: ";
   cin.getline(str, 256);// no ignore neede and accepts spaces
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