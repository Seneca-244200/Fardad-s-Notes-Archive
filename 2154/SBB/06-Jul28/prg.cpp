#include <iostream>
#include <fstream>
using namespace std;


int main(){
  fstream file("info.txt");
  char str[2000];
  file >> str;
  cout << str << endl;
  file.ignore();
  file.getline(str, 1000, '\n');
  cout << str << endl;
  return 0;
}