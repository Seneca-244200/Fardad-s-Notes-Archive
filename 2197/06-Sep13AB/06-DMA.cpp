#include <iostream>
using namespace std;
int main() {
   int* a;
   int num;
   int i;
   cout << "how many ints? " << endl;
   cin >> num;
   a = new int[num];
   for (i = 0; i < num; i++) {
      cout << (i + 1) << ": ";
      cin >> a[i];
   }
   for (i = num - 1; i >= 0; i--) {
      cout << (i + 1) << ": " << a[i] <<endl;
   }
   delete[] a;
   return 0;
}