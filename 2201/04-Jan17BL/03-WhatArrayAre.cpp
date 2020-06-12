#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void prnIntArr(const int* arr, int size) {
   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
   cout << endl;
}
int main() {
   int a[5] = { 100, 200, 300, 400, 500 };
   cout << a[0] << endl;
   cout << *a << endl;
   prnIntArr(a, 5);
   return 0;
}
