#include <iostream>
using namespace std;
int main(){
  double val = 23.456;
  double* p = &val;
  int a[3] = { 100, 200, 300 };
  cout << *a << endl;
  cout << *(a + 1) << endl;
  cout << *(a + 2) << endl;
  cout << *(a + 0) << endl;
  cout << *(a + 1) << endl;
  cout << *(a + 2) << endl;
  cout << p[0] << endl; // p[0] *(p + 0)
  return 0;
}