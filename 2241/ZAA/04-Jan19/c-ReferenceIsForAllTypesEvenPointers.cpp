#include <iostream>
using namespace std;
void pointTo( double*& des, double* src ) {
   des = src;
}


int main( ) {
   cout << "Welcome to OOP244ZAA 04-Jan 19th." << endl;
   double a = 10.10;
   double b = 20.20;
   double* p = &a;
   cout << *p << endl;
   pointTo( p, &b ); // pointTo(double*& des = p, double* src = &b);
   cout << *p << endl;


   return 0;
}