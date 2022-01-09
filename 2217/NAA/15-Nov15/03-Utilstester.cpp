#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   char* name{};
   alloCopy(name, "Fardad");
   cout << name << endl;
   delete[] name;
   return 0;
}