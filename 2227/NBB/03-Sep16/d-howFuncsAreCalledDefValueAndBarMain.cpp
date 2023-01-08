#include "bar.h"
using namespace sdds;
int main() {
   bar('-', 50); 
     //  void bar(char fill='-', int length=50)
   bar('+');
   bar();
   bar(25);
   return 0;
}