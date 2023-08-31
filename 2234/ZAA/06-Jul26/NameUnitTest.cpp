#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

Name sayHello( Name A ) {
   cout << "Hello, " << A << " how are you?" << endl;
   return A;
}

int main( ) {
   Name NL{ nullptr };
   Name N = "Fred";
   cout << N << endl;
   NL = sayHello( N );
   cout << "NL is: " << NL << endl;
   return 0;
}
