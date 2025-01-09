#include <iostream>
using namespace std;


int main( ) {
   int num = 123;
   cout << "[";
   cout.width( 20 );  // only effects the next output
   cout << num << "] " << endl;;
   cout << "1***********************************" << endl;
   cout << "[";
   cout.width( 20 );  
   cout.setf( ios::left ); // the dirction adjustement sticks!!!
   cout << num << "] " << endl;;
   cout << "2***********************************" << endl;
   cout << "[";
   cout.width( 20 );
   cout << num << "] " << endl;;
   cout << "3***********************************" << endl;
   cout << "[";
   cout.width( 20 );
   cout.setf( ios::right ); // the dirction adjustement sticks!!!
   cout << num << "] " << endl;;
   cout << "4***********************************" << endl;
   cout << "[";
   cout.width( 20 );
   cout.setf( ios::left ); // the dirction adjustement sticks!!!
   cout << num << "] " << endl;;

   return 0;
}