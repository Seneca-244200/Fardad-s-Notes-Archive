#include <iostream>
using namespace std;

int main() {
   int i = 40;
   int& R = i;
   cout << R << endl;
   i = 8765;
   cout << R << endl;
   cout << unsigned(&i) << endl;
   cout << unsigned(&R) << endl;
   return 0;
}

