#include <iostream>
using namespace std;
#include "Mark.h"
using namespace sict;
int main(){
  int* a;
  a = new int[5];
  if (a != (int*)0){
    int i;
    for (i = 0; i < 5; i++){
      a[i] = (i + 1) * 10;
    }
    for (i = 0; i < 5; i++){
      cout << a[i] << endl;
    }
    delete[] a;
  }
  else{
    cout << "Not enough memory!" << endl;
  }
  return 0;
}