#include <iostream>
using namespace std;
void prn(const int* ar, int size) {
   for (int i = 0; i < size; i++) {
      cout << ar[i] << endl;
   }
}
int main() {
   int a[5]  ;
   cout << "Testing 1 3 2" << endl;
   prn(a, 5);

   return 0;
}