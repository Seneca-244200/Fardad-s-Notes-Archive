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
  int a(5);
  int b;
  b = 10;
  Mark M;
  Mark N = 70;  // Potato
  //Mark N(70);   // potaato
  Mark L(65, 90);
  cout << a << endl;
  displayMark(M);
  M.outOf(60).totalMark(40);
  displayMark(M);
  displayMark(N);
  displayMark(L);
  return 0;
}