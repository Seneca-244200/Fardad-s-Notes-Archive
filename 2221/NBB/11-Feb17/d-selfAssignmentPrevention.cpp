#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark N("Test 2",70,100);
   Mark M("Workshop", 7, 10);
   Mark& R = M;
   M = N;
   cout << M << " <-> " << N << endl;
   R = M;
   cout << R << " <-> " << M << endl;
   return 0;
}