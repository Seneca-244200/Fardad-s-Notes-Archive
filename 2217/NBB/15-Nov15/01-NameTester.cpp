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
   showName(N);
   N = "Freddie";// a nemless Name out of "Freddy" will be created
                 // between the two lines, the nameless dies after the first
   /*
   * out of "Freddy" A nameless Name is created (one arg Constructor)
   * N = Nameless;
   * Nameless is passed by reference to the operator=
   * Nameless will be called Ro in operator=
   * and etc....
   * After that there is no use with the Nameless, therefore it dies.
   */
   showName(N);
   return 0;
}