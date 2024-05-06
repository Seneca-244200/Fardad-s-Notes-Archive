#include <iostream>
#include "Utils.h"
using namespace std;
using namespace seneca;
int main( ) {
   double num{};
   char name[21];
   cout << "You name?\n> ";
   ut.getCstr( name, 10 );
   cout << name << " please, enter a double\n> ";
   num = ut.getDouble( );
   cout << "You entered " << num << endl;
   return 0;
}