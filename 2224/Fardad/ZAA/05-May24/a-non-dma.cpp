#include <iostream>
using namespace std;
int main() {
   int a[10];
   int i;
   for (i = 0; i < 10; i++) {
      a[i] = i * 100;
   }
   for (i = 0; i < 10; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
   return 0;
}