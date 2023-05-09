#include <iostream>
#include "Student.h" 
using namespace std;
using namespace sdds;
int main() {
   Student S;
   S.show();
   S.set("Fernando Soleimanov", 123123);
   S.show();
   S.set("Fred Soley", 456456);
   S.show();
   return 0;
}
