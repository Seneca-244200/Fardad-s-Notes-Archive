#include <iostream>
using namespace std;

int main() {
   int a;
   int& R = a;
   a = 20;
   cout << R << endl;
   return 0;
}