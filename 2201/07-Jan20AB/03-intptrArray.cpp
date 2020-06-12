#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
   int i =5, j = 8, k = 12;
   int* a[3] = { &i, &j , &k };
   for (int x = 0; x < 3; x++) {
      cout << *a[x] << endl;
   }
 
   return 0;
}