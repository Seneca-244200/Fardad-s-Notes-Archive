#include <iostream>
using namespace std;
int main( ) {
   cout << "OOP244 NAA - Jan 28" << endl;
   char name[] = "Fardad Soleimanloo";
   cout << name << endl;
   name[4] = 0;
   cout << name << endl;
   cout << &name[5] << endl;
   return 0;
}