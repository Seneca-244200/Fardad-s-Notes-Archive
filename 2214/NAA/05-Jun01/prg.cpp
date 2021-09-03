#include "Name.h"
using namespace sdds;
int main() {
   Name n;
   n.init();
   n.set("Homer", "Simpson");
   n.print();
   n.set("Lisa", "Simpson");
   n.print();
   n.deleteMem();
   return 0;
}