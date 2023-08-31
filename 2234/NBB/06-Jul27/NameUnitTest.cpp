#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

void sayHello( Name N ) {
   cout << "Hello, " << N << endl;
}
Name getName( ) {
   Name N;
   cout << "Enter name: ";
   cin >> N;
   return N;
}

int main( ) {
   Name empty;
   Name N = "Neda";
   Name M = "Mark";
   sayHello( empty ); // sayHello(Name N = empty);
   sayHello( N );     // sayHello(Name N = main's N);
   empty = getName( );
   M = empty;
   sayHello( M );
   return 0;
}
