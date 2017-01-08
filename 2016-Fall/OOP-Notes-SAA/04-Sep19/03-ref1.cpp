#include <iostream>
using namespace std;
int main() {
   int i = 10;
   int& R = i;
   int* p = &R;
   cout << R << endl;
   R = 20;
   cout << i << endl;
   return 0;
}