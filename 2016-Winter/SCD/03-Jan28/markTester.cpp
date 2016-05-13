#include <iostream>
using namespace std;
#include "Mark.h"
using namespace sict;
const double pi = 3.14159265;
#define PI 3.14159265
int main(){
  Mark M;
  M.outOf(60);
  M.totalMark(40);
  cout << M.totalMark() << "/" << M.outOf() << " is ";
  M.display(DSP_MARK);
  cout << "% that is ";
  M.display();
  cout << endl;
  cout << "In gpa format it is ";
  M.display(DSP_GPA);
  cout << endl;
  return 0;
}