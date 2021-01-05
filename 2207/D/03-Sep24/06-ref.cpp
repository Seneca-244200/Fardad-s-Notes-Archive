#include <iostream>
using namespace std;


int main() {
   int i = 30;
   int& R = i;
   cout << R << endl;
   i = 20;
   cout << R << endl;
   cout << unsigned(&i) << endl;
   cout << unsigned(&R) << endl;
   return 0;
}
