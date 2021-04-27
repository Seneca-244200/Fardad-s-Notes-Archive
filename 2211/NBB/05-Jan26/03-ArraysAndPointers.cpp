#include <iostream>
using namespace std;




void displayInts(int* p, int size) {
   for (int i = 0; i < size; i++) {
      cout << p[i] << " ";
   }
   cout << endl;
}


int main() {
   int a[10] = { 10, 20, 30, 40, 50 };
   displayInts(a, 5);
   displayInts(a + 2, 5);


   // adding one to a pointer adds the 
   // size of the target, not one!!!
   double* p = (double*)8;
   cout << (unsigned)p << endl;
   p++;
   cout << (unsigned)p << endl;
   return 0;
}
