#include <iostream>
using namespace std;

void getInt(int& intRef){
  cin >> intRef;
}

int& crazyRef(int& R){
  return R;
}

int main(){
  int a;
  cout << "Please enter an int: ";
  getInt(a);
  cout << "You entered: " << a << endl;
  crazyRef(a) = 20;
  cout << "a is now: " << a << endl;

  return 0;
}
