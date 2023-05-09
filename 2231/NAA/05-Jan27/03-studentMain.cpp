#include <iostream>
#include "Student.h" 
using namespace std;
using namespace sdds;
int main() {
   Student S;
   S.set();
   S.display();
   S.set("Fernando Soleimanov", 123123);
   S.display();
   S.set("Fred Soley", 456456);
   S.display();
   return 0;
}
