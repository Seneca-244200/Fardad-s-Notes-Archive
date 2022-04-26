#include <iostream>
#include "Mark.h"
using namespace std;
using namespace sdds;
void displayMarkInDetail(Mark A) {
   char grd[3];
   A.display();
   A.grade(grd);
   cout << ", " << A.percent() << "%, " << grd << endl;
}
int main() {
   Mark M("Workshop 1", 50, 60);
   displayMarkInDetail(M);  // the function call behind the scene is like this:
                            // displayMarkInDetail(Mark A = M);
   return 0;
}

