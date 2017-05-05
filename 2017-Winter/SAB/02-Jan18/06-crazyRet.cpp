#include <iostream>
using namespace std;

int& crazyfoo(int& R) {
   R += 10;
   return R;
}

int main() {
   int i = 1;
   crazyfoo(i) += 100;
   cout << i << endl;
   cout << "Both are address of i: " << endl << &crazyfoo(i) << endl << &i << endl;
   return 0;
}