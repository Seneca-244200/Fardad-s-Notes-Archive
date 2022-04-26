

#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark M("Workshop 5", 80, 85);
   Mark N("Test 2");
   M += 10;
   N += 75;
   cout << "M: " << M << endl;
   cout << "N: " << N << endl;
   M = 50 + N;
   cout << "M: " << M << endl;
   cout << "N: " << N << endl;
   M = ++N;
   cout << "M: " << M << endl;
   cout << "N: " << N << endl;
   M = N++;
   cout << "M: " << M << endl;
   cout << "N: " << N << endl;
   return 0;
}

