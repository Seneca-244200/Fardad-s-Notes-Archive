#include <iostream>
#include <fstream>
#include "MyStr.h"
using namespace std;
using namespace seneca;
void printStr( MyStr  S ) {
   cout << S << endl;
}
int main( ) {
   MyStr A = "This is a test for a string to be printed!";
   printStr( A );// printStr(MyStr S = A); // checks copy constructor
   A = A; // checks copy assignment
   printStr( A );// printStr(MyStr S = A);
   return 0;
}