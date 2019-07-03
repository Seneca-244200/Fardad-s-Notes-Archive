#include <iostream>
#include <fstream>
using namespace std;
int main() {
  char str[200];
  int i;
  ifstream fin("data.txt");
  (fin >> str).ignore(1000, '\n') >> i;
 // fin.ignore(12,',');
 // fin >> str;
  cout << str << endl << i << endl;
  return 0;
}