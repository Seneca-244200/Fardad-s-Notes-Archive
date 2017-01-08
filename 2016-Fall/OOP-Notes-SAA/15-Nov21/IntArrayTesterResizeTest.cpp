#include <iostream>
#include "IntArray.h"
using  namespace ict;
using namespace std;
int main(){
  int i;
 /* int I[20];
  for (int i = 0; i < 20; i++){
    I[i] = i * 10;
  }*/
  IntArray I(10);
  for (i = 0; i < I.size(); i++){
    I.Element(i) = i * 10;
  }
  for (i = 0; i < I.size(); i++){
    cout << I.Element(i) << " ";
  }
  cout << endl;
  I.size(15);
  for (i = 0; i < I.size(); i++){
    I.Element(i) = i * 10;
  }
  for (i = 0; i < I.size(); i++){
    cout << I.Element(i) << " ";
  }
  cout << endl;
  I.size(5);
  for (i = 0; i < I.size(); i++){
    I.Element(i) = i * 10;
  }
  for (i = 0; i < I.size(); i++){
    cout << I.Element(i) << " ";
  }
  cout << endl;

  return 0;
}