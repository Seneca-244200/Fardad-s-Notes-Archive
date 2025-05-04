#include <iostream>
using namespace std;
void foo( int* I ) {
   cout << "I in foo: " << *I << endl;
   cout << "Adding ten to I" << endl;
   (*I) += 10;
   cout << "I in foo: " << *I << endl;
}
int main( ) {
   cout << "OOP244NAA Jan 21" << endl;
   int num = 10;

   foo( &num ); // void foo(int* I = &num);

   cout << "num: " << num << endl;

   return 0;
}