#include <iostream>
using namespace std;
// Ad-Hoc / Overloading
void foo(int a) {// foo_int
   cout << a << endl;
}
void foo(double d) { // foo_double
   cout << d << endl;
}
int main() {
   foo(23.456); 
   return 0;
}