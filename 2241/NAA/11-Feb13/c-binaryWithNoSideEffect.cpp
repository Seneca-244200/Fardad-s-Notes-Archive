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
   MyStr name = "Homer ";
   MyStr surname = "Simpson";
   MyStr fullname;
   fullname = name + surname;

   return 0;
}