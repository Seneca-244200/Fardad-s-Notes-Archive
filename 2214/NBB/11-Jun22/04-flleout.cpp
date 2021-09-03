#include <iostream>
#include <fstream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
int main() {
   ofstream fileout("myfile.txt");
   fileout << "Hello this is a file!!!!" << endl;
   fileout.width(20);
   fileout.setf(ios::right);
   fileout.fill('@');
   fileout << 123 << endl;
   return 0;
}

