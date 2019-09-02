#include <iostream>
using namespace std;
#include "SafeArray.h"
int main() {
  SafeArray<int> I(3);
  int* p;
  int x;
  cout << "The size of the array is: " << I.size() << endl;
  for (x = 0; x < 5; x++) {
    I[x] = x + 10;
    cout << "Setting I[" << x << "] to " << I[x] << endl;

  }
  for (x = 0; x < 7; x++) {
    cout << "I[" << x << "]: " << I[x] << endl;
  }
  cout << "And the size of the array is: " << I.size() << endl;
  p = (int*)I;
  return 0;
}