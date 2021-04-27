#include <iostream>
using namespace std;
// this program leaks 20 bytes of memeory!!!!!
int main() {
   int* a;
   a = new int[5];
   for (int i = 0; i < 5; i++) {  // 0 1 2 3 4
      a[i] = i + 10;             // a[0] = 0 + 10... a[1] = 1 + 10... a[2] = 2 + 10
   }
   for (int i = 0; i < 5; i++) {
      cout << a[i] << endl;
   }
   return 0;
}
