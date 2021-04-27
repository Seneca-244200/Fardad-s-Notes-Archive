#include <iostream>
using namespace std;
int main() {
   int a = 10, b = 1;
   if (a > 10 && (b += 1)) {  // lazy evaluation
      cout << "Something" << endl;
   }
   cout << b << endl;
   return 0;
}