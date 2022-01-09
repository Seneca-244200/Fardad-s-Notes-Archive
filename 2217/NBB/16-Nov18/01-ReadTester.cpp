#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   int num{};
   cout << "Enter an integer: ";
   num = Utils::read();
   cout << "You Entered: " << num << endl;


   return 0;
}