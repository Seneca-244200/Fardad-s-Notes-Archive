#include <iostream>
#include <new>
using namespace std;
int main(){
  int size = 10;
  double* num = new (nothrow) double[size];
  int i;
  bool done = false;
  cout << "Enter positive double number, end with a negative"<<endl;
  for (i = 0; !done; i++){
    if (i == size){
      double* temp = new (nothrow) double[size + 10];
      for (int j = 0; j < size; j++){
        temp[j] = num[j];
      }
      delete[] num;
      num = temp;
      size += 10;
    }
    cout << (i + 1) << ": ";
    cin >> num[i];
    if (num[i] < 0){
      done = true;
    }
  }
  for (int k = i - 2; k >= 0; k--){
    cout << num[k] << " ";
  }
  delete[] num;
  return 0;
}