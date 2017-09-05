#include <iostream>
using namespace std; 
#include "DynDbl.h"
using namespace sict;
int main(){
  double d[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
  DynDbl D(d, 5);
  int i;
  for (i = 0; i < D.size(); i++){
    cout << D[i] << "  ";
  }
  cout <<"size is: "<<((int)D)<< endl;
  for (i = 0; i < 10; i++){
    D[i] = i* 1.3;
  }
  for (i = 0; i < 10; i++){
    cout << D[i] << " ";
  }
  cout << endl;  
  for (i = 0; i < D.size(); i++){
    cout << D[i] << " ";
  }
  cout << endl;

  return 0;
}