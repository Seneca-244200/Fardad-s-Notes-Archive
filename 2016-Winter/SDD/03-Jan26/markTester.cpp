#include <iostream>
using namespace std;
#include "Mark.h"
using namespace sict;
const double pi = 3.14159265;
//#define PI 3.14159265
int main(){
  Mark M;
  M.outOf(50);
  M.rawMark(25);
  cout << M.rawMark() << "/" << M.outOf() << " is " 
       << M.weightedMark() << "% that is " << M.grade()<< endl;
  return 0;
}