#include <iostream>
using namespace std;
int& foo(int& i) {
   i += 2;
   return i;
}
int main() {
   int j=10;
   foo(j) += 20;
   cout << j << endl;
   return 0;
}

