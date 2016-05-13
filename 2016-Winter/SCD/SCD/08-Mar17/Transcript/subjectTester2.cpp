#include <iostream>
using namespace std;
#include "Subject.h"
using namespace sict;
int main(){
  Subject U("EAC150", "College English", 85);
  Subject T(U);

  U.display();
  T.display();
  return 0;
}