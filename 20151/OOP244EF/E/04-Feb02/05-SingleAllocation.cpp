#include <iostream>
#include <new>
using namespace std;
int main(){
  int* p = new int;
  for (*p = 10; *p < 100; (*p) += 10){
    cout << (*p) << endl;
  }
  delete p;
  //p = NULL; // use this if the program continues and gets complex...
  //if (p){
  //  delete p;
  //}
  p = new int[10];
  int i;
  for (i = 0; i < 10; i++){
    p[i] = i + 100;
  }
  for (i = 0; i < 10; i++){
    cout<< p[i] << " ";
  }
  cout << endl;
  delete[] p;
  return 0;
}