#include <iostream>
using namespace std;

class BankAccount;
template <typename type>
bool isInRange(const type& maxValue, const type& minValue, const type& value2Btested) {
   bool ret = false;
   if (maxValue >= value2Btested &&  value2Btested >= minValue) {
      ret = true;
   }
   return ret;
}


int main() {
   int a;
   if (isInRange(100, 10, a)) {

   }

   return 0;
}