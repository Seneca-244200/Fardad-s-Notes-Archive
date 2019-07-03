#include <iostream>
#include <fstream>
using namespace std;
int main() {
  char str[50];
  ifstream myfile("hoohoo.txt");
  //myfile.getline(str, 49);
  myfile >> str;
  cout << str << endl;
  myfile >> str;
  cout << str << endl;
  myfile >> str;
  cout << str << endl;
  return 0;
}