#include <iostream>
using namespace std;
void foo() {
   int a[10];
   int i;
   for (i = 0; i < 10; i++) {
      a[i] = i * 123;
   }
   for (i = 0; i < 10; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
}
int main() {
   foo();
   cout << "Starting the program" << endl;
   int* a;
   int i;
   cout << "Allocating 10 ints" << endl;
   a = new int[10];
   for (i = 0; i < 10; i++) {
      a[i] = i * 1000;
   }
   for (i = 0; i < 10; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
   cout << "deleting the 10 ints" << endl;
   delete[] a;
   a = nullptr;
   cout << "re-allocating 20 ints in the same pointer" << endl;
   a = new int[20];
   for (i = 0; i < 20; i++) {
      a[i] = i * 1000;
   }
   for (i = 0; i < 20; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
   cout << "de-allcating the 20 ints" << endl;
   delete[] a;
   cout << "Ending the program" << endl;
   return 0;
}