#include <iostream>
#include "Utils.h"
using namespace std;
using namespace seneca;
int main( ) {
   Utils ut;
   char name[81];
   cout << "Please enter name\n> ";
   cin.getline( name, 81 );
   cout << name << endl;
   cout << "Please enter name\n> ";
   cin.getline( name, 81 );
   cout << name << endl;
   return 0;
}
