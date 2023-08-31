#include <iostream>
using namespace std;
int main( ) {
   int* p = new int[100];
   delete[] p;
   double* q = new double;
   delete q;
   return 0;
}