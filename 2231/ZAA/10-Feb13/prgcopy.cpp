#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Homer simpson!";
   ofstream file("myfile.txt");
   file << "hello " << name << endl;
   file.close();
   ifstream infile("myfile.txt");
   char ch = infile.get();
   cout << ch << endl;
   ifstream cpp("prg.cpp");
   ofstream cppcopy("prgcopy.cpp");
   do {
      ch = cpp.get();
      if (cpp) cppcopy << ch;
   } while (cpp);
   return 0;
}