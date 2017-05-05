#include <iostream>
using namespace std;
int main() {
   int I;
   int J[5];
   int* a;
   Mark* mp;
   a = new int[5];
   mp = new Mark;
   // do the work with a....

   delete[] a;
   delete mp;
   return 0;
}