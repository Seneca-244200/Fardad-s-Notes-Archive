#include <iostream>
#include <iomanip>
#include "DynArray.h"
#include "Utils.h"

using namespace std;
using namespace sdds;


void hexDump(void* mem, size_t size) {
   unsigned char* cptr = reinterpret_cast<unsigned char*>(mem);
   for(size_t i = 0; i < size; i++) {
      cout << setw(2) << setfill('0') <<  std::hex << int(cptr[i]) << " ";
   }
   cout << endl;
}

int main() {
   double v = 1234567.8987654321;
   long l = 123456789;
   hexDump(&v, sizeof(v));
   hexDump(&l, sizeof(l));
   return 0;
}