#include <iostream>
#include "Bottle.h"
using namespace std;
using namespace seneca;
int main() {
   Bottle C("C", 500);
   C = 300;

   cout << "Here is " << C << endl;

   cout << "Capacity is " << C[0] << endl;
   cout << "Amount is " << C[1] << endl;

   return 0;
}