#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   int mark;
   Mark A("Part 1", 30, 80);  // init
   Mark B("Part 2", 40, 100);  // init
   Mark C;
   B << 50;  // not the best thing todo,but just as and example
   B << "Test Part 2";
   A >> mark;
   cout << "A percentage: " << mark << endl;
   cout << A << endl;
   cout << B << endl;
   cout << C << endl;
   C = A + B;
   cout << "The Total mark for \"" << A << "\" and \"" << B
      << "\" is \"" << C <<"\""<< endl;
   return 0;
}
