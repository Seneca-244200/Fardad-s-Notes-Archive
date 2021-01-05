#include "Output.h"
using namespace sdds;
int main() {
   fout << "Hello my name is jack and I am ";
   fout.width(20);
   fout << 36 << " years old!\n";
   return 0;
}