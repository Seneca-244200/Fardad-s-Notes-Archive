#include <iostream>
using namespace std;
int main(){
  int a[5];
  int i;
  for (i = 0; i < 5; i++){
    cout << (i + 1) << ": ";
    cin >> a[i];
  }
  for (i = 4; i >= 0; i--){
    cout << (i + 1) << ": " << a[i] << endl;
  }
  return 0;
}