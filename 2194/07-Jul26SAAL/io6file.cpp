#include <iostream>
#include <fstream>
using namespace std;


int main() {
  ifstream infile("AgeReport.txt");
  char str[128];
  infile >> str;
  cout << str << endl;
  while (!infile.fail()) {
    infile >> str;
    cout << str << endl;
  }
  infile.clear();
  infile.seekg(0);
  infile >> str;
  cout << str << endl;
  return 0;
}