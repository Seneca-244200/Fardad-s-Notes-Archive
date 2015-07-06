#include <iostream>
using namespace std;

int main() {
  char str1[21];
  char str2[21];

  cout << "Enter a string : " << endl;
//  cin >> str1;
//  cin >> str2;
  cin >> str1 >> str2;
  cout << "|" << str1 << "|    " << "|" << str2 << "|"<< endl;
  return 0;
}

