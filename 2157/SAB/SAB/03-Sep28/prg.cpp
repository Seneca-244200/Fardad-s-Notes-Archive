#include <iostream>
using namespace std;
int main(){
  double* nums;
  int cnt;
  cout << "Number of doubles: ";
  cin >> cnt;
  nums = new double[cnt];
  int i;
  for (i = 0; i < cnt; i++){
    cout << (i + 1) << ": ";
    cin >> nums[i];
  }
  for (i = cnt - 1; i >= 0; i--){
    cout << nums[i] << " ";
  }
  cout << endl;
  delete[] nums;
  nums = (double*)0;
  // other stuff coming here
  return 0;
}