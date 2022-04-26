#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
void displayMarkInDetail(Mark A) {
   A.display();
   cout << A.percent() << 
}
int main() {
   Mark M("Workshop 1", 50, 60);
   return 0;
}

