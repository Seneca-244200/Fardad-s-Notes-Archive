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
  Mark M;
  int mark;
  double dmark;
  M.outOf(60);
  M = 40;
  mark = M;
  dmark = M;
  cout << M << endl;
  cout << "the mark is " << mark << " and " << dmark <<  endl;
  return 0;
}