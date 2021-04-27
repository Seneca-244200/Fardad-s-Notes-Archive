#include <iostream>
#include "Box.h"
using namespace std;
using namespace sdds;
/*  (automatic) Staitcally allocated memory
1- object come to life
2- initilization (area)         <--- this order was mentioned incorrectly in class
3- in class initializttion     see: https://en.cppreference.com/w/cpp/language/constructor
4- constructor call
5- object availabe to work
6- desctructor is called
7- object goes out of scope
*/

/*  Dymanically allocated
1- object is dynamically alocated
2- initilization (area)      <--- this order was mentioned incorrectly in class
3- in class initializttion   see: https://en.cppreference.com/w/cpp/language/constructor
4- constructor call
5- object availabe to work
6- desctructor is called
7- object is deallocated
*/
int main() {
   int a = 10;// in coding
   int b(30); // in coding and initialization area
   int c{ 20 }; // universal way ot initialization 
   cout << a << " " << b << endl;
   Box E;
   Box B("My Box", 7, 7, '#');
   cout << B << endl;
   cout << E << endl;
   return 0;
}