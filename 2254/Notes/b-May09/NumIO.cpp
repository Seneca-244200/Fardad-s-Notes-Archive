#include <iostream>
using namespace std;

namespace seneca {

   int getNum() {
      int number;
      cin >> number;
      return number;
   }

   bool getValidatedNum(int* num, int min, int max) {
      bool result = false;
      int number = getNum();
      if (number >= min && number <= max) {
         *num = number;
         result = true;
      }
      return result;
   }

}
