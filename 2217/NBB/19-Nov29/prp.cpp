#include <iostream>
using namespace std;

int main() {
   int* a = new int[20];
   delete[] a;
   a = nullptr;  // if you are reusing


   return 0;
}