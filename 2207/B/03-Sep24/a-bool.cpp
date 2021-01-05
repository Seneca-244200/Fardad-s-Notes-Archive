#include <iostream>
using namespace std;
int main() {
   bool res = true;
   int a = 25;
   int val = 234;
   cout << res << endl;
   res = !a;
   cout << res << endl;
   cout << val << endl;
   val = !!a;
   cout << val << endl;
   val = !a;
   cout << val << endl;
   res = !!a;
   cout << res << endl;
   res = a;
   cout << res << endl;
   return 0;
}