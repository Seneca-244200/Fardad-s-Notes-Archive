#include <iostream>
using namespace std;
int main(){
  int a[5] = { 10, 20, 30, 40, 50 };
  int* p = a;
  int i;
  for (i = 0; i < 5; i++){
    cout << a[i] << " ";
  }
  cout << endl;
  for (i = 0; i < 5; i++){
    cout << p[i] << " ";
  }
  cout << endl;
  cout << *p << endl;
  cout << *a << endl;
  cout << *(p + 2) << endl;
  cout << *(a + 2) << endl;
  return 0;
}