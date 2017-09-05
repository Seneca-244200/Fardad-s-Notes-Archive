#include <iostream>
using namespace std;

void bar(int num = 70, char ch = '-');

int main(){
  bar();
  bar(50);
  bar(30, '#');
  bar('A'); // prints 65 '-'s, why?
  return 0;
}
void bar(int num, char ch){
  for (int i = 0; i < num; i++){
    cout << ch;
  }
  cout << endl;
}