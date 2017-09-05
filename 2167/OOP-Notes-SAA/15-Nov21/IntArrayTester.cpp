#include <iostream>
#include "ArrayTemp.h"
using  namespace ict;
using namespace std;

int main(){
  int i;
  Array<double> D;
  Array<double> I(5);
  for (i = 0; i < 7; i++){
    I[i] = i * 10.1;
  }
  for (i = 0; i < I.size(); i++){
    cout << I[i] << " ";
  }
  cout << endl;
  D = I;
  for (i = 0; i < D.size(); i++){
    cout << D[i] << " ";
  }
  cout << endl;
  return 0;
}