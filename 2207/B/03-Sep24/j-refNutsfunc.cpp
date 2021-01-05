#include <iostream>
using namespace std;

int& nutsFunc(int& R) {
   return R;
}

int foo() {
   return 123;
}
int main() {
   int i = 100;
   int j = 23;
   nutsFunc(i) = 34567;
   cout << i<< endl;
  
   cout << foo() << endl;


   cout << unsigned(&i) << endl;
   cout << unsigned(&nutsFunc(i)) << endl;
   cout << unsigned(&j) << endl;
   cout << unsigned(&nutsFunc(j)) << endl;
   return 0;
}

