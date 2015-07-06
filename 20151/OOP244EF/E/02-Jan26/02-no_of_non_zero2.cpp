#include <iostream>
using namespace std;

int main(){
  int a[10] = { 10, 5, 0, 40, 0, 60, 9, 0, 50, 0 };
  auto no_of_non_zero = 0;
  for (auto i = 0; i < 10; i++){
    if (a[i]){
      no_of_non_zero++;
    }
  }
  cout << "number of non-zeros: " << no_of_non_zero << endl;
  return 0;
}