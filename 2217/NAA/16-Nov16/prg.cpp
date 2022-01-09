#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;
int main() {
   char* name;
   cout << "Name: ";
   name = Utils::read(cin, '\n');
   cout << "Hello " << name << endl;
   delete[] name;
      return 0;
}