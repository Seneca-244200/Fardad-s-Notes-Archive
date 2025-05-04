#include <iostream>
using namespace std;
int globalValue{ };

int& getGlobal( ) {
   return globalValue;
}

int& foo( int& I ) {
   cout << "I in foo: " << I << endl;
   cout << "Adding ten to I" << endl;
   I += 10;
   cout << "I in foo: " << I << endl;
   return I;
}
int main( ) {
   cout << "OOP244NAA Jan 21" << endl;
   int num = 10;

   foo( num ) = 400; // int& foo(int& I = num);

   cout << "num: " << num << endl;

   getGlobal( ) = 12324;


   return 0;
}