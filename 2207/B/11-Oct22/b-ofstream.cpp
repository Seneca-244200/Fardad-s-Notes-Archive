#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   ofstream fileout("output.txt");
   fileout << "Hello threre!" << endl;
   fileout.width(30);
   fileout.fill('~');
   fileout.setf(ios::left);
   fileout.setf(ios::fixed);
   fileout.precision(2);
   fileout << 3.14159265 << "Add more stuff tocome" << endl;
   return 0;
}

/*
*/