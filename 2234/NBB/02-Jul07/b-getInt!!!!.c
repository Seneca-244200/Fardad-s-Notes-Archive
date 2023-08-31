#include <iostream>
using namespace std; 
int getInt( ) {
   int val;
   cout << "Enter an int: ";
   cin >> val;
   return val;
}


int main( ) {
   int x ;
   x = getInt( );
   cout << "You Entered " << x << endl;
   return 0;
}