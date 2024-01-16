#include  <iostream>
using namespace std;

double TAX = 0.7;

double& TheTax( ) {
   return TAX;
}


int main( ) {
   cout << TheTax( ) << endl;

   TheTax( ) = 0.13;

   cout << TheTax( ) << endl;



   return 0;
}