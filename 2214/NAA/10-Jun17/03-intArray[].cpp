#include <iostream>
#include "IntArray.h"
using namespace sdds;
using namespace std;
int main() {
  // int x[3];//  0 1 2 ... 3 is out of bound

   IntArray A(5); // create array of 10 integers
   int i, value = 5;
   for (i = 0; i < 7 ; i++, value+=5){
      A[i] = value;
   }
   for (i = 0; i < A.size(); i++) {
      cout <<"A[" << i << "]: " <<  A[i] << endl;
   }
   return 0;
}