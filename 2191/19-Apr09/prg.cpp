#include <iostream>
#include "String.h"
#include <cstring>
using namespace sict;
using namespace std;
int main() {
  String str("ABD");
  char cstr[200];
  strcpy(cstr, str);;
  cout << cstr << endl;
  return 0;
}