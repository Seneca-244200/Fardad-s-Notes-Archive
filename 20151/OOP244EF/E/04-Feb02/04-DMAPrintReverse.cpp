#include <iostream>
#include <new>
using namespace std;
int main(){
  int* a;
  int i;
  int num;
  cout << "Number of integers? ";
  cin >> num;
  a = new (nothrow) int[num];
  if (a){
    for (i = 0; i < num; i++){
      cout << (i + 1) << ": ";
      cin >> a[i];
    }
    for (i = num - 1; i >= 0; i--){
      cout << (i + 1) << ": " << a[i] << endl;
    }
    delete[] a;
  }
  else{
    cout << "memory allocation failed!" << endl;
  }
  return 0;
}