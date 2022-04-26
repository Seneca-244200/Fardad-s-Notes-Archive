#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
int main() {
   char grade[3];
   Mark M("Workshop 5", 80, 85);
   Mark N("Test 2");
   cout << M << " " << M.percent() << "%, " << M.grade(grade) <<  endl;
   cout << N << endl;
   N = M;
   cout << N << endl;
   return 0;
}

