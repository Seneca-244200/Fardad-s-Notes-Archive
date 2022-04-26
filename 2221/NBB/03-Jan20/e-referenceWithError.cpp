#include <iostream>
using namespace std;

int& ref(int& R) {
   int value = R
   return value; // cannot return a reference of a local variable
                 // because it will die with the scope is over
                 // and reference of a dead thing has not use.
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
