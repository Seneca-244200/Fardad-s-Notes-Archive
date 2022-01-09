#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   char name[8]{};
   cout << "Name: ";
   Utils::read(name, 2, 7, "Bad name, retry: ");
   cout << "hello " << name << endl;
   return 0;
}