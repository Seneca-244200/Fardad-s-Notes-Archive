#include "Student.h"
#include "Person.h"
int main() {
   Student S("Fred Soley", 123456u);
  
   S.introduce() << '\n';

   return 0;
}

