#include <iostream>
#include "Utils.h"
using namespace std;
using namespace seneca;
/*
cout, clog, cerr
*/
int main( ) {
   char name[81];
   cout << "Please enter name\n> ";
   ut.getCstr( name, 5 );
   cout << name << endl;
   cout << "Please enter name\n> ";
   ut.getCstr( name, 80 );
   cout << name << endl;
   return 0;
}