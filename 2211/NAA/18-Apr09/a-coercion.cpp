#include <iostream>
using namespace std;
void foo(int a) {
   cout << a << endl;
}
int main() {
   foo(23.456); // Ad-Hoc/Coercion
   float a, b = 5.5;
   a = b + 4;
   return 0;
}