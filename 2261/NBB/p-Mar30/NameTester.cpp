#include <iostream>
#include "Name.h"
using namespace std;
int main() {
   Name n("jack" );
   Name m = n;
   Name b;
   cout << "OOP244 NBB - March 30" << endl;
   cout << "Name intially is " << n << ", " << b << ", " << m << endl;
   b = n;
   cout << "Name now is " << n << ", " << b << ", " << m << endl;
   cout << "Name\n> ";
   cin >> n;
   cout << "Hello " << n << endl;
   return 0;

}