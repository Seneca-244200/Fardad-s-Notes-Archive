#include <iostream>
using namespace std;
int main( ) {
   cout << "Welcome to OOP244NAA 04-Jan18" << endl;
   int* p = new int; // single dma
   cout << "int: ";
   cin >> *p;
   cout << "int was: " << *p;
   delete p;     // single deleting.
   return 0;
}