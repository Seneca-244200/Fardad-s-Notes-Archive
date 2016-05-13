#include <iostream>
#include <fstream>
using namespace std;
int main(){
  // ios::   in , out , app, trunc, ate
  fstream fin("hello.txt", ios::in|ios::out|ios::app);
  char str[41];
  fin >> str;
  cout << str << endl;
  fin.getline(str, 40, '\n');
  cout << str << endl;
  return 0;
}