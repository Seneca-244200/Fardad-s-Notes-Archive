#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char* str = "abcdefg";
  cout << strlen(str + 1) << endl;
  cout << strlen(str) + 1 << endl;
  return 0;
}