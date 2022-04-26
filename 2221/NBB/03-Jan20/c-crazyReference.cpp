#include <iostream>
using namespace std;

int& ref(int& R) {
   return R;
}
// R->a   ref() ->R ===> ref() -> a
int main() {
   int a = 30;
   int b;
   cout << "a: " << a << endl;
   ref(a) = 50; // ref(int& R = a) 
   cout << "a: " << a << endl;
   ref(b) = 100;
   cout << "b: " << b << endl;
   return 0;
}
