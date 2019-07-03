#include <iostream>
using namespace std;
void setInt(int& a) {
  a = 2000;
}
int main() {
  int i;
  int& r = i;
  r = 100;
  cout << i << endl;
  setInt(i);
  cout << i << endl;
  return 0;
}