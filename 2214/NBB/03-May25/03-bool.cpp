#include <iostream>
using namespace std;
bool getInt(int* val) {
   bool res = false;
   // if success res = true;
   return res;
}


int main() {
   int a = 10;
   int b = 20;
   int c;
   bool flag = false;
   if (a) {
      cout << "A(" << a << ") is a true value" << endl;
   }
   c = b > a;
   cout << "value of b > a that is stored in c is: " << c << endl;
   flag = b > a;
   return 0;
}