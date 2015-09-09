#include <iostream>
using namespace std;
#include "sort.h"
using namespace oop244;
int main(){
  int i;
  int x[5] = { 1, 5, 3, 10, 2 };
  double y[6] = { 1.1, 5.2, 3.3, 10.4, 2.5, 4.5 };
  sort(x, 5);
  sort(y, 6, false);
  for (i = 0; i < 5; i++){
    cout << x[i] << endl;
  }
  for (i = 0; i < 6; i++){
    cout << y[i] << endl;
  }
  return 0;
}