#include <iostream>
using namespace std;
int main() {
   bool res = true;
   int a = 25;
   cout << res << endl;
   cout << true << endl;
   cout << false << endl;
   res = !res;
   cout << "res: " << res << endl;
   res = 1234;
   cout << "res: " << res << endl;
   res = !a;
   cout << "res: " << res << endl;
   res = !!a;
   cout << "res: " << res << endl;
   cout << !!a << endl;
   return 0;
}