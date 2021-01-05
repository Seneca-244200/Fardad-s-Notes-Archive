#include <iostream>
using namespace std;

void setToZero(int& R) {
   R = 0;
}

int main() {
   int i = 30;
   int j = 400;
   setToZero(i);
   cout << i << endl;
   setToZero(j);
   cout << j << endl;
   return 0;
}