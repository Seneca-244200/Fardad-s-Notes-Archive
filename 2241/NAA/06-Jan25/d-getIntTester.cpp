#include <iostream>
#include "Utils.h"
using namespace std;
using namespace seneca;
int main( ) {
   Utils ut;
   int num = 10;
   cout << "Enter an int\n> ";
   num = ut.getInt( );
   cout << "You enterd " << num << endl;
   cout << "Enter an int\n> ";
   num = ut.getInt( );
   cout << "You enterd " << num << endl;
   return 0;
}