#include <iostream>
using namespace std;





int main() {
   int a[5] = { 10, 20, 30, 40, 50 };
   cout << *a << endl;
   *a = 200;
   cout << a[0] << endl;
   *(a + 1) = 400;
   cout << a[1] << endl;
   return 0;
}
