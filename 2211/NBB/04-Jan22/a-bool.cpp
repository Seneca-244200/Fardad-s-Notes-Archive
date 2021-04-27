#include <iostream>
using namespace std;
bool getInt() {
   bool res = false;
   // whateber...
   return res;
}

int main() {
   bool res = true;
   int a = 25;
   cout << res << endl;
   res = false;
   cout << res << endl;
   res = 0;
   cout << res << endl;
   res = 234;
   cout << res << endl;
   res = !a;
   cout << res << endl;
   res = !!a;
   cout << res << endl;
   res = a > 100;
   cout << res << endl;
   cout << res << endl;
   res = a < 100;
   cout << res << endl;



   return 0;
}