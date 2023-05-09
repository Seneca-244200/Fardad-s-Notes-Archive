#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int num;
   //num = U.getInt();
   //cout << num << endl;
   num = U.getInt(18, 100, "Age: ");
   cout << num << endl;
   return 0;
}