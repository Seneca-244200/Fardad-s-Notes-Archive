#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   Mark N("Part 1",50,100);
   Mark M("Part 2", 3, 10);
   Mark L;
   Mark invalid;
   Mark& R = M;
   L = N + M;
   cout << "The sum of \"" << N << "\" and \"" << M << "\" is: \"" << L << "\"" << endl;
   L = N + invalid;
   cout << "The sum of \"" << N << "\" and \"" << invalid << "\" is: \"" << L << "\"" << endl;
   return 0;
}