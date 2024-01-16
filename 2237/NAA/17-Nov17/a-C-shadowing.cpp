#include <iostream>
using namespace std;


int main() {

   int a = 10;
   int b = 20;
   if (b == 20) {
      int a = 30;
      a += 10;
      cout << a << endl;
   }
   cout << a << endl;
   return 0;
}

