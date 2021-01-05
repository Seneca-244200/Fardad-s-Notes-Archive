#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   ifstream filein("output.txt");
   char str[500];
   int val;
   if (filein) {
      filein.getline(str, 500);
      filein >> val;
      cout << str << "    " << val << endl;
   }
   else {
      cout << "could not open the file" << endl;
   }
   return 0;
}



