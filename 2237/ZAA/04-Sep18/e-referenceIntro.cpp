#include  <iostream>
using namespace std;

void setToZero( int& val ) {
   val = 0;
}

void setToZero( int* val ) {
   *val = 0;
}


int main( ) {
   int i = 10, j = 100;
   setToZero( i );   // setToZero(int& val = i);
   cout << i << endl;
   setToZero( &j ); // setToZero(int* val = &j);
   cout << j << endl;
   return 0;
}