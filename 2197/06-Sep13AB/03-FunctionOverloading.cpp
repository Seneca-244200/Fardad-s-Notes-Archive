#include <iostream>
using namespace std;
void bar(int len, char fill);
void bar(int len);
void bar();
int main() {
   bar(30, '*');
   bar(45);
   bar();
   return 0;
}
void bar() {
   bar(60);
}
void bar(int len) {
   bar(len, '-');
}
void bar(int len, char fill) {
   for (int i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}
