#include <iostream>
#include <fstream>
using namespace std;
int main() {
  char str[200];
  char ch;
  ifstream fin("data.txt");
  /*ch = fin.get();
  cout << ch << endl;*/
  fin.getline(str, 11,',');
  cout << str << endl;
  fin.getline(str, 11);
//  if (fin) {
  if(!fin.fail()){
    cout << str << endl;
  }
  return 0;
}