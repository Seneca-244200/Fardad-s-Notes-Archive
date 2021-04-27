#include <iostream>
using namespace std;
int main() {
   int i = 50;
   int& R = i;   // int&    alias for an integer
   int* p;       // int*    pointer for an integer

   cout << R << endl;

   R += 10;

   cout << i << endl;

   p = &i;
   cout << unsigned(p) << endl;
   p = &R;
   cout << unsigned(p) << endl;

   return 0;
}