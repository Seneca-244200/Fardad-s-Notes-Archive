#include <iostream>
using namespace std;
#include "Subject.h"
using namespace sict;
int main(){
  Subject U("EAC150", "College English", 85);
  Subject T("IPC144", "Intro to porgramming", 70);
  U.display();
  T.display();
  T = U;
  U.display();
  T.display();
  return 0;
}