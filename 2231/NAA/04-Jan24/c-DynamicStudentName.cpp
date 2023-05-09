#include <iostream>
#include "Student.h"
using namespace std;
using namespace sdds;
int main() {
   Student S;
   S.display();
   S.set("Fred Soley", 123123);
   S.display();
   S.set();
//   S.m_stno = 10101010; not permitted, private
   S.display();
   return 0;
}