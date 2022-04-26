#include <iostream>
#include "a-Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark N("Test 2");
   Mark L;
   int mark;
   mark = 50 + N;
   cout << "mark: " << mark << endl;
   cout << "N: " << N << endl;
   if (!L) {
      cout << L << " is in a safe empty state" << endl;
   }
   return 0;
}