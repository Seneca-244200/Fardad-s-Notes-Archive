#include <iostream>
#include <fstream>
using namespace std;


int main(){
  ifstream infile("info.txt");
  char str[2000];
  infile >> str;
  cout << str << endl;
  infile.getline(str, 1000, '\n');
  cout << str << endl;
  return 0;
}