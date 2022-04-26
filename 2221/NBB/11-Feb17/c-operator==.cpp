#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark N("Test 2",70,100);
   Mark M("Workshop", 7, 10);
   if (N == M) {
      cout << M << " has the same mark as " << N << endl;
   } 
   return 0;
}