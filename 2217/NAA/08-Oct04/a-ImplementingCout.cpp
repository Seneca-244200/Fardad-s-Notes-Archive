#include "Output.h"
using namespace sdds;

int main() {
 
   int i;
   fout << "Numbers to print:\n";
   for (i = 0; i < 20; i++) {
      fout.width(3);
      fout << (i + 1) << ": ";
      fout.width(10).precision(2);
      fout << (i + 1) * 1234.12345678 << "\n";
   }
   return 0;
}