#include <iostream>
#include "String.h"
using namespace std;
using namespace sict;
int main() {
  String S, T;
  cout << "Please enter the first name: ";
  cin >> S;
  cout << "Please enter the second name: ";
  cin >> T;
  if (S > T) {
    cout << T << endl << S;
  }
  else {
    cout << S << endl << T;
  }
  return 0;
}