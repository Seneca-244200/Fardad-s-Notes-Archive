#include <iostream>
#include "ValidatedInt.h"
using namespace std;
using namespace seneca;
// this can not work, come next week!
int main() {
   cout << "OOP244 NAA - Feb04" << endl;
   ValidatedInt vi("Jar", 10, 0, 100), res;
   cout << vi << endl;
   res = 10 + vi;
   return 0;
}