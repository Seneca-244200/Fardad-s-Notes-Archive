#include <iostream>
using namespace std;


void set2Zero(int& x) {
   x = 0;
}

int main() {
   int i = 30;
   set2Zero(i);
   cout << i << endl;
   return 0;
}
