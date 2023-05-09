#include <iostream>
#include "Student.h" 
using namespace std;
using namespace sdds;
int main() {
   Student R(12345);
   Student S("Fred Soley");
   R.display();
   S.display();
   return 0;
}
