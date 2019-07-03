#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "no of ints: ";
  cin >> n;
  int* nums = new int[n];
  cout << "Enter nums: ";
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  for (int j = n - 1; j >= 0; j--) {
    cout << nums[j] << endl;
  }
  delete[] nums;
  return 0;
}