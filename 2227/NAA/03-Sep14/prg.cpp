#include <iostream>
using namespace std;

int main() {
   int* a;
   int* num = new int;
   int i;
   cout << "How many ints: ";
   cin >> *num;
   a = new int[*num];
   for (i = 0; i < *num; i++) {
      cout << (i + 1) << ": ";
      cin >> a[i];
   }
   for (i = *num - 1; i >= 0; i--) {
      cout << a[i] << " ";
      //cout << *(a + i) << " ";
   }
   cout << endl;
   delete[] a;
   delete num;
   return 0; 
}