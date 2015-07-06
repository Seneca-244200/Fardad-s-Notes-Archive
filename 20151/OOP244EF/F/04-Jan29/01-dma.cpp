#include <iostream>
using namespace std;
int main(){
  int size;
  int* a;
  int i;
  cout << "How many integers you need? ";
  cin >> size;
  a = new int[size];
  if (a){
    cout << "Please enter " << size << "ints: ";
    for (i = 0; i < size; i++){
      cin >> a[i];
    }
    for (i = 0; i < size; i++){
      cout << a[i] << " ";
    }
    delete[] a;
  }
  else{
    cout << "Oops, not enough memory!" << endl;
  }
  return 0;
}