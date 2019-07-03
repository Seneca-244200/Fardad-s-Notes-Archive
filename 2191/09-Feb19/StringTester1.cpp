#include <iostream>
#include "String.h"
using namespace std;
using namespace sict;
int main() {
  String S;
  String T = "Hello there!";
  // String T("Hello there!"); // exactly the same as previous line
  String U = T;
  String V;
  //String U(T);
  cout << "--->" << S << "<---" << endl;
  cout << "--->" << T << "<---" << endl;
  V = S = T;
  T = T;
  S = "Another thing";
  return 0;
}