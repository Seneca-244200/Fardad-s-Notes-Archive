#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   ifstream filein("outputs.txt");
   char str[500];
   double d;
   if (filein) {
      filein.getline(str, 500);
      filein >> d;
      cout << str << " " << d << endl;
   }
   else {
      cout << "file not found!" << endl;
   }
   return 0;
}

/*
*/