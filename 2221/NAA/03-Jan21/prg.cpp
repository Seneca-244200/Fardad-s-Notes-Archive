#include <iostream>
using namespace std;

int& ref(int& R) {
   return R;
}


int main() {
   int x;

   ref(x)  = 35;   // ref(int& R = x);

   cout << x << endl;
   
   cout << unsigned(&ref(x)) << " " << unsigned(&x) << endl;

   return 0;
}