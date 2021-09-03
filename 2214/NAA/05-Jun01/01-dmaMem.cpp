#include "Name.h"
using namespace sdds;
int main() {
   Name n;
   n.set("Fred", "Soley");
   //n.m_first[0] = 'X';
   n.print();
   n.deleteMem();
   return 0;
}