#include <iostream>
using namespace std;
double TAX = 0.7;

double& taxValue( ) {
   return TAX;
}

int main( ) {
   cout << taxValue() << endl;
   taxValue( ) = 0.13;
   cout << taxValue( ) << endl;
   return 0;
}