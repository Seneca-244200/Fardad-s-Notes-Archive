#include <iostream>
using namespace std;

int main() {
   int a = 10, b = 20, c = 30;
   int* p[3] = { &a , &c, &b };
   for (int i = 0; i < 3; i++) {
      cout << *p[i] << endl;
   }

   return 0;
}
