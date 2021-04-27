#include <iostream>
using namespace std;
int main() {
   int* a;
   a = new int[5];  // allocated a dynamic array
   for (int i = 0; i < 5; i++) {
      a[i] = i + 10;
   }
   for (int i = 0; i < 5; i++) {
      cout << a[i] << endl;
   }
   delete[] a;   // delete an array (dynamic)
   //delete a;   // deletes only the first therefore 16 bytes of memory leak will happen

   return 0;
}
