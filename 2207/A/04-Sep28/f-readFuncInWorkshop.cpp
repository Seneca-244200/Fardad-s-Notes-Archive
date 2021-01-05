#include <iostream>
#include <cstring>
using namespace std;
bool readName(char* n);
bool foo();
bool faa();
int main() {
   bool ok;
   char name[234];

   if (readName(name) && foo() && faa()) {
      // Do the DMA
      ok = true;
   }
   
   
   if (readName(name)){
      // do the DMA;
      ok = foo() && faa();
   }
   return 0;
}