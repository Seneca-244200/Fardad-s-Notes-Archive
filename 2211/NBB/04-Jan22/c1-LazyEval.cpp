#include <iostream>
using namespace std;

int main() {
   int a = 10;
   int b = 1;
   if (a < 10 && (b += 1)) {     // b will remain as 1, Lazy eval
      cout << "something" << endl;
   }
   cout << b << endl;
   return 0;
}