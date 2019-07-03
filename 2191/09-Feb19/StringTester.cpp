#include <iostream>
#include "String.h"
using namespace std;
using namespace sict;
int main() {
  String S;
  cout << "Enter your name: ";
  cin >> S;
  cout << "Your name " << S << " is " << S.size() << " characters long!" << endl;
  cout << "Enter your name: ";
  cin >> S;
  cout << "Your name " << S << " is " << S.size() << " characters long!" << endl;
  return 0;
}