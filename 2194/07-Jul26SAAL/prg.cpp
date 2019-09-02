#include <iostream>
#include <fstream>
using namespace std;


int main() {
  fstream file("AgeReport.txt", ios::in);
  char str[128];
  file >> str;
  cout << str << endl;
  while (!file.fail()) {
    file >> str;
    cout << str << endl;
  }
  file.clear();
  file.seekg(0);
  file >> str;
  cout << str << endl;
  return 0;
}