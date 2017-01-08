#include <iostream>
#include "IntArray.h"
using  namespace ict;
using namespace std;
int main(){
  int i;
  IntArray I(5);
  for (i = 0; i < 7; i++){
    I[i] = i * 10;
  }
  I[10] = 2345;
  for (i = 0; i < I.size(); i++){
    cout << I[i] << " ";
  }
  cout << endl;


  return 0;
}