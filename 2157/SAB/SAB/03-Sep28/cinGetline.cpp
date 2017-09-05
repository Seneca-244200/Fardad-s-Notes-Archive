#include <iostream>
using namespace std;
int main(){
  char str[81];
  cout << "Enter a string: ";
  //cin >> str;
  cin.getline(str, 80, '\n');
  cout << str << endl;
  return 0;
}