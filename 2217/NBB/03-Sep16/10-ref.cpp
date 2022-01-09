#include <iostream>
using namespace std;

int main() {
   // int& A; error
   int i = 50;
   int& R = i;
   int* p;
   cout << R << endl;
   cout << i << endl;
   R = 20;
   cout << R << endl;
   cout << i << endl;
   p = &i;
   cout << unsigned(p) << endl;
   p = &R;
   cout << unsigned(p) << endl;
   return 0;
}
