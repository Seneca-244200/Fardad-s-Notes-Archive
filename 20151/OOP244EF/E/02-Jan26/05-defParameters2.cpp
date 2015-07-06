#include <iostream>
using namespace std;

void bar(int num = 70, char ch = '-'){
  for (int i = 0; i < num; i++){
    cout << ch;
  }
  cout << endl;
}
int main(){
  bar(30, '#');
  bar(50);
  bar();
  return 0;
}
