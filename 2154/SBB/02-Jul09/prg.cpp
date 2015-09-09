#include <iostream>
using namespace std;
int main(){
   Student x;
   Student y = x;
   int* a;
   int* b;
   int i = 10;
   int x[5];
   a = new int[i];
   b = new int;
   delete[] a;
   delete b;
   return 0;
}