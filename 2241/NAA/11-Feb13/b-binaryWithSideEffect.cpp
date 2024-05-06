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
   MyStr name = "Homey ";
   MyStr surname = "Simpson";
   MyStr fullname;
   name.operator+=( "Jay" );
   name += " ";
//   name.operator+=( surname );
   fullname = name += surname;
   return 0;
}