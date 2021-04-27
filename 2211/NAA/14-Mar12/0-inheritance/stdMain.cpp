#include "Student.h"
#include "Person.h";
int main() {
   Person H("Homer Simpson");
   Student S("Fred Soley", 12345u);
   H.introduce() << "\n";
   S.introduce() << "\n";
   return 0;
}

