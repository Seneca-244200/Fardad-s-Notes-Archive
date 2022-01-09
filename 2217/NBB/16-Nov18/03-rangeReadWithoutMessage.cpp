#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   int num{};
   cout << "Enter a mark between 0, and 100: ";
   num = Utils::read(0, 100);
   cout << "Your mark: " << num;
   return 0;
}