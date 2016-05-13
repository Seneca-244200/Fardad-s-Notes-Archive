#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream fout;
  fout.open("hello.txt");
  char name[41];
  cout << "Enter your name: ";
  cin >> name;
  cout << "Hello " << name << endl;
  fout << "Hello " << name << endl;
  fout.close();
  return 0;
}