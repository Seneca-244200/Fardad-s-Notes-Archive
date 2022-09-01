#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
// << left shift 
int main() {
   int i = 4, j;
   Container A(200.0, 4.0), B;

   j = i++;

   cout << i << " " << j << endl;
   // the output will be 5 and 4, because ++ happens after the statement
  
   B = A++;
   cout << "A," << A << endl;
   cout << "B," << B << endl << "------------------------" << endl;;

   return 0;
}
