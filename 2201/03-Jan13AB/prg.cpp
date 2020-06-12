
#include "Student.h"
using namespace sdds;

int main() {
   Student St[2];
   St[0].set("Fardood", 46);
   St[0].print();
   St[1].set("Fred", 55);
   St[1].print();
   return 0;
}