#include <iostream>
using namespace std;
#include "Mark.h"
using namespace sict;
const double pi = 3.14159265;
#define PI 3.14159265
void displayMark(const Mark& rM){
  cout << rM.totalMark() << "/" << rM.outOf() << " is ";
  rM.display(DSP_MARK);
  cout << "% that is ";
  rM.display();
  cout << endl;
  cout << "In gpa format it is ";
  rM.display(DSP_GPA);
  cout << endl;
}
int main(){
  Mark(55, 10).display(DSP_GRADE).display(DSP_GPA)
    .display(DSP_MARK).gpa();
  Mark A(55, 100);
  A.display(DSP_GRADE).display(DSP_GPA)
    .display(DSP_MARK).gpa();
  cout << endl<< "This is the end!" << endl;
  return 0;
}