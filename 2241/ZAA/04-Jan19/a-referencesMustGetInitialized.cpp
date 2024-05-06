#include <iostream>
using namespace std;
int main( ) {
   cout << "Welcome to OOP244ZAA 04-Jan 19th." << endl;
   int a;
   a = 10;
   int x = 10;

   //int& r; error since r must be initialized to refer to another variable

   int& r = x;

   return 0;
}