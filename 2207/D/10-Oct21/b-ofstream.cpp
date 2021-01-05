#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   ofstream fileout("output.txt");
   fileout << "Hello!" << endl;
   fileout.fill('*');
   fileout.width(35);
   fileout.setf(ios::right);
   fileout << "there!" << endl;
   return 0;
}