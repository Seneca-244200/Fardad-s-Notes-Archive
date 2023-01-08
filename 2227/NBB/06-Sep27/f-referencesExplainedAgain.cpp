#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

int main() {
   int a;
   int* p = &a;
   int& r = a;
   *p = 10;
  
   cout << a << endl;
  
   r = 20; // since this works as line 10
           // *p is also reference a

   cout << a << endl;



  /* Container X;
   X.read().display();*/
   return 0;
}