#include <iostream>
using namespace std;

int& nutsFunc(int& R) {
   return R;
}

int main() {
   int i = 100;
   nutsFunc(i) += 2000;
   cout << i << endl;
   return 0;
}

