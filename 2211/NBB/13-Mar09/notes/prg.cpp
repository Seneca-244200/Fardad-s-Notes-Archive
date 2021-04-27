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

#include <iostream>
#include "Box.h"
using namespace std;
using namespace sdds;
int main() {
   Box B;
   Box C("My box", '#');
   Box D("Another Box", 20, 5, '@');
   cout << B << endl;
   cout << C << endl;
   cout << D << endl;
   return 0;
}