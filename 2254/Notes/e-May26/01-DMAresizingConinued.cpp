#include <iostream>
using namespace std;
//void addOne( int& R ) {
//   R++;
//}
//void user( ) {
//   int I;
//   addOne( I ); // addOne(int& R = I);
//
//
//
//}


void print( int val[], int size ) {
   for ( int i = 0; i < size; i++ ) {
      if ( i != 0 ) cout << ", ";
      cout << val[i];
   }
   cout << endl;
}


void expand( int*& theData, int size, int newsize ) {
   if ( newsize > size ) { // if newsize is not bigger do nothing
      int* temp = new int[newsize];
      for ( int i = 0; i < size; i++ ) {
         temp[i] = theData[i];
      }
      delete[] theData;
      theData = temp;
   }
}


int main( ) {
   cout << "OOP244NAA - May26" << endl;
   int i = 0;
   int* data = new int[4];
   for ( i = 0; i < 4; i++ ) {
      data[i] = (i + 1) * 10;
   }
   print( data, 4 );
   expand( data, 4, 8 );//expand( int*& theData = data, int size = 4, int newsize =8 )

   for ( i = 4; i < 8; i++ ) {
      data[i] = (i + 1) * 10;
   }

   print( data, 8 );

   delete[] data;

   return 0;
}