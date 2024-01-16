#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
int main( ) {
   cout << "Good Morning OOP244 ZAA - 07-28" << endl;
   Employee C( "Fred Soley", 123456, 234234.22 );
   C.display(  ) << endl;
   C.set( "Jane Doe", 654321, 300000.00 ).display() << " is hired!" << endl;
   return 0;
}