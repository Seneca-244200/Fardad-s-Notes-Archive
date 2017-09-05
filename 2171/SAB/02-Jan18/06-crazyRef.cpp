#include <iostream>
using namespace std;

int& crazyfoo(int& R) {
   R += 10;
   return R;
}

int main() {
   int i = 1;
   int& R = i;
   crazyfoo(R) += 100;
   cout << i << endl;
   cout << "All three are address of i: " << endl
      << &crazyfoo(i) << endl << &i << endl << &R << endl;
   return 0;
}