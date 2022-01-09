#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
void showName(Name theName) {
   cout << theName << endl;
}
int main() {
   Name N = "John"; // assignment at the moment of creation call the one arg cosntructor
   cout << N << endl;
   showName(N); // N will be copied
   N = "Freddie"; // a nemless Name out of "Freddy" will be created
                 // betwee the two line, the nameless dies
   /*
   * out of "Freddy" A nameless Name is created (one argConst)
   * N = Nameless;
   * Nameless is passed by reference to the operator=
   * Nameless will be called N in operator=
   * and etc....
   */
   showName(N);
   return 0;
}