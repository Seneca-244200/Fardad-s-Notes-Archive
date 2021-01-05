#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   ofstream fileout("output.txt");
   fileout << "hello!" << endl;
   fileout.width(30);
   fileout.fill('-');
   fileout.setf(ios::left);
   fileout << 20 << "what?" << endl;
   return 0;
}



