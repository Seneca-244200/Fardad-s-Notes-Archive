#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;
int main() {
   Name n = "Fred Soley";
   Name X = "Xman";
   Name empty;
   Name& R = n;
   cout << "Hello " << n << endl;
   n = X;
   cout << "n: " << n << endl;
   cout << "X: " << X << endl;
   X = empty;
   cout << "empty: " << empty << endl;
   cout << "X: " << X << endl;
   R = n;
   cout << "R: " << R << endl;
   cout << "n: " << n << endl;
   return 0;
}