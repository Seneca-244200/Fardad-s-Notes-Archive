#include <iostream>
using namespace std;
int& foo(int& i) {
   /*cout << i << endl;
   i += 10;*/
   return i;
}

int main() {
   int z = 10;
   foo(z) += 20;  // looks crazy    // i => z       foo() => i  =====> foo() => z;
   cout << z << endl;
   return 0;
}
