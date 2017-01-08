#include <iostream>
using namespace std;
void bar();
void bar(int len);
void bar( int len, char ch);
int main() {
   bar(20, '*');
   bar(20);
   bar();
   return 0;
}
void bar() {
   bar(70, '=');
}
void bar(int i) {
   bar(i, '=');
}
void bar( int i, char c) {
   for (int j = 0; j < i; j++) {
      cout << c;
   }
   cout << endl;
}