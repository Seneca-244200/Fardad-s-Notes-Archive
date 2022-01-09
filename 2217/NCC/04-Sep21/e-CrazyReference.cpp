#include <iostream>
using namespace std;
int& foo(int& R) {
   /*cout << R << endl;
   R += 10;*/
   return R;
}
int main() {
   int x = 200;
   cout << foo(x) << endl; // foo(x) become a new name for x
   foo(x) += 10;
   cout << x << endl;
   return 0;
}