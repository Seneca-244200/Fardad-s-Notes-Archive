#include <iostream>
#include "Mark.h"

using namespace std;
using namespace sict;

void displayMarkInAll3Types(Mark& mark) {
   mark.displayType(DSP_GPA);
   mark.display();
   cout << endl;
   mark.displayType(DSP_GRADE);
   mark.display();
   cout << endl;
   mark.displayType(DSP_MARK);
   mark.display();
   cout << endl;
}

int main() {
   Mark M;
   cout << "All garbage since M is not set, therefore all attributes have random garbage!" << endl;
   displayMarkInAll3Types(M);
   cout << "Setting maxValue to 10 and the mark to 7: " << endl;
   M.setMaxValue(10);
   M.set(7);
   displayMarkInAll3Types(M);
   return 0;
}