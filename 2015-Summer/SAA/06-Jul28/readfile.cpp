#include <iostream>
#include <fstream>
using namespace std;



int main(){
  char str[2000];
  ifstream infile("info.txt");
  infile >> str;
  cout << str <<endl;
  infile.getline(str, 1000, '\n');
  cout << str << endl;
  return 0;
}