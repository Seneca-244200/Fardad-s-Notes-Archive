#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   int num{};
   cout << "Number: ";
   num = Utils::readInt();
   cout << "Number: " << num << endl;
   return 0;
}