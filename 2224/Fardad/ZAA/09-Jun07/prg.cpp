#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;
int main() {
   Container A = 200.0, B{ 300.0, 150.0 } ,C;
   A.display() << 'A' << endl;
   B.display() << 'B' << endl << "------------------------" << endl;;
   //A.operator+=(50);
   A += 50;
   A.display() << 'A' << endl;
   B.display() << 'B' << endl << "------------------------" << endl;;
   //B.operator+=(A);
   B += A;
   A.display() << 'A' << endl;
   B.display() << 'B' << endl << "------------------------" << endl;;
   A.operator+=(150);
   A.display() << 'A' << endl;
   B.display() << 'B' << endl << "------------------------" << endl;;
   B.operator+=(A);
   A.display() << 'A' << endl;
   B.display() << 'B' << endl << "------------------------" << endl;;
   C = sum(A, B);
   C.display() << 'C' << endl << "------------------------" << endl;;
   return 0;
}
