#include <iostream>
using namespace std;
int main(){
  double nums[1000];
  int cnt;
  cout << "Number of doubles: ";
  cin >> cnt;
  int i;
  for (i = 0; i < cnt; i++){
    cout << (i + 1) << ": ";
    cin >> nums[i];
  }
  for (i = cnt - 1; i >= 0; i--){
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}