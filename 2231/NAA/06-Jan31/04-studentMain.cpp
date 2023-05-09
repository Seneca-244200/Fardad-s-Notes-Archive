#include <iostream>
#include "Student.h" 
using namespace std;
using namespace sdds;
int main() {
   Student Q = { "Lisa Simpson", 23456 };
   Student R{ "Homer Simpson", 12345 };
   Student S("Fred Soley", 34567);
   Q.display();
   R.display();
   S.display();
   
   return 0;
}
