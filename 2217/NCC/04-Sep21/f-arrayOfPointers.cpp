#include <iostream>
using namespace std;
int main() {
   int x = 10, e = 30, a = 42;
   int* p[3] = { &e, &x, &a };
   for (int i = 0; i < 3; i++) {
      cout << *p[i] << endl;
   }
   for (int i = 0; i < 3; i++) {
      (*p[i]) += 10;
   }
   for (int i = 0; i < 3; i++) {
      cout << *p[i] << endl;
   }
   return 0;
}