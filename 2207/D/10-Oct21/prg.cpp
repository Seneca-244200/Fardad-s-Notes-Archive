#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   ifstream filein("output.txt");
   ifstream filein2("hoohoo.txt");
   char str[500];
   char ch;
   filein >> str;
   cout << str << endl;
   ch = filein.get();
   cout << ch << endl;
   ch = filein.get();
   cout << ch << endl;
   if (filein2.fail()) {
      cout << "No file to open" << endl;
   }
   if (filein2) {
      cout << "success" << endl;
   }
   else {

      cout << "No file to open" << endl;
   }
   if (filein) {
      cout << "success" << endl;
   }
   else {

      cout << "No file to open" << endl;
   }
   return 0;
}