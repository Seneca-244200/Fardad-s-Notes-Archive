#include <iostream>
using namespace std;
void bar();
void bar(int len);
void bar(int len, char fill);
int main() {
   bar(35, '*');
   bar(50);
   bar();
   return 0;
}
void bar() {
   bar(75);
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
