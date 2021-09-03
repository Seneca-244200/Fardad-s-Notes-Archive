#include "MyIO.h"
using namespace sdds;

int main() {
   char name[81];
   mout << "What is your name? ";
   min >> name;
   mout<<"my name is "<<name<<"\nMy account number is "
   <<245466<<" and it has "<<234.56<<" dollars in it\n";
   return 0;
}