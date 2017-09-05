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
  cout << M.totalMark() << "/" << M.outOf() << " is "
       << M.weightedMark() << "% that is " << M.grade() <<endl;
  return 0;
}