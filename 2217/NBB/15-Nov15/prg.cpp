#include <iostream>
#include "FullName.h"
using namespace std;
using namespace sdds;
int main() {
   FullName M("Freddie", "Mercury");
   FullName N("John", "Doe");
   M.display();
   cout << endl;
   N.display();
   cout << endl;
   return 0;
}