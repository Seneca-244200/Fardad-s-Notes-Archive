#include <iostream>
using namespace std;

void bar(int num, char ch){
  for (int i = 0; i < num; i++){
    cout << ch;
  }
  cout << endl;
}
void bar(int num){
  bar(num, '-');
}
void bar(){
  bar(70);
}
int main(){
  bar();
  bar(50);
  bar(30, '#');
  return 0;
}
