#include <iostream>
using namespace std;
void print( int val[], int size ) {
   for ( int i = 0; i < size; i++ ) {
      if ( i != 0 ) cout << ", ";
      cout << val[i];
   }
   cout << endl;
}

/// <summary>
/// receives dynamic data and expands it to new size, then returns the newly allocated memory with new size
/// </summary>
/// <param name="theData">dynamic data to be resized</param>
/// <param name="size">old size</param>
/// <param name="newsize">new size</param>
/// <returns>newly allocated memory with new size and old data</returns>
int* expand( int* theData, int size, int newsize ) {
   int* newData = theData;
   if ( newsize > size ) { // if newsize is not bigger do nothing
      int* temp = new int[newsize];
      for ( int i = 0; i < size; i++ ) {
         temp[i] = theData[i];
      }
      delete[] theData;
      newData = temp;
   }
   return newData;
}


int main( ) {
   cout << "OOP244NAA - May 23" << endl;
   int i = 0;
   int* data = new int[4];
   for ( i = 0; i < 4; i++ ) {
      data[i] = (i + 1) * 10;
   }
   print( data, 4 );
   data = expand( data, 4, 8 );//int* expand( int* theData = data, int size = 4, int newsize =8 )

   for ( i = 4; i < 8; i++ ) {
      data[i] = (i + 1) * 10;
   }

   print( data, 8 );

   delete[] data;
   
   return 0;
}