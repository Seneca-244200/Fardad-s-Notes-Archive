#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   char infilename[256];
   char outfilename[256];
   char ch;
   cout << "soruce: ";
   cin.getline(infilename, 256, '\n');
   cout << "destination: ";
   cin.getline(outfilename, 256, '\n');
   ifstream infile(infilename);
   ofstream outfile(outfilename);
   if (!infile) {
      cerr << "Could not open " << infilename << endl;
   }
   if (!outfile) {
      cerr << "Could not open " << outfilename << endl;
   }
   if (infile && outfile) {
      while (infile) {
         ch = infile.get();
         if (infile) outfile.put(ch);
      }
   }


   return 0;
}