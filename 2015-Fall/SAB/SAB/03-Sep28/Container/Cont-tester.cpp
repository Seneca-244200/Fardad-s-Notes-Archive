#include <iostream>
#include "Container.h"
using namespace std;
using namespace sict;
int main(){
  Container* nums;
  int cnt;
  cout << "Number of Containers: ";
  cin >> cnt;
  nums = new Container[cnt];
  int i;
  for (i = 0; i < cnt; i++){
    cin.ignore(1000, '\n');
    cout << (i + 1) << ": ";
    nums[i].conEntry();
  }
  for (i = cnt - 1; i >= 0; i--){
    nums[i].display();
    cout << "----------------------" << endl;
  }
  delete[] nums;
  nums = (Container*)0;
  // other stuff coming here
  return 0;
}