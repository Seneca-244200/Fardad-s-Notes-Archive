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
Mark operator+(Mark theMark, int value){
  Mark temp(theMark.totalMark() + value, theMark.outOf());
  return temp;
}
int main(){
  Mark M;
  Mark N = 40;  
  displayMark(N);
//  N.operator+=(20);
  M = N += 20;
  displayMark(N);
  displayMark(M);
  return 0;
}