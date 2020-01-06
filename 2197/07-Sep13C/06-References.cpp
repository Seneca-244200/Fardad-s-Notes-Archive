#include <iostream>
using namespace std;
int& crazy(int& val) {
   return val;
}
int main() {
   int a;
   crazy(a) = 234;
   cout << a << endl;
   return 0;
}
