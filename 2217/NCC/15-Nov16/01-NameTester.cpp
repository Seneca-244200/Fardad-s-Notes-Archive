#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
void showName(Name theName) {
   cout << theName << endl;
}
int main() {
   Name N = "John";// assignment at the moment of creation call 
                   // the one arg cosntructor
   cout << N << endl;
   showName(N); // passed by value to invoke copy constructor
   N = "Freddie"; // a nemless Name out of "Freddie" will be created.
                 // After the assignment, the nameless dies
   /*
   * out of "Freddie" A nameless Name is created (one arg Constructor)
   * N = Nameless;
   * Nameless is passed by reference to the operator=
   * Nameless will be called Ro in operator=
   * and etc....
   * After that there is no use with the Nameless, therefore it dies.
   */
   showName(N);
   return 0;
}