#include <iostream>
#include "BadMark.h"
using namespace std;
using namespace sdds;

int main() {
   Mark A("Test Part 1", 20, 35);
   Mark B("Test Part 2", 30, 35);
   displayMarkInDetail(A);
   displayMarkInDetail(B);
   cout << "Average: " << average(A, B) << "%" << endl;
   return 0;
}

