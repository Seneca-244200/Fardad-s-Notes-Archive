#include <iostream>
using namespace std;

int main() {
   int i = 50;
   int& R = i;
   int* p;
   cout << i << endl;
   cout << R << endl;
   R = 20;
   cout << i << endl;
   cout << R << endl;
   i -= 2;
   cout << i << endl;
   cout << R << endl;
   p = &i;
   cout << unsigned(p) << endl;
   p = &R;
   cout << unsigned(p) << endl;
   *p = 400;
   cout << i << endl;
   cout << R << endl;
   cout << *p << endl;
   return 0;
} // only one integer will die

// contineu with references.....