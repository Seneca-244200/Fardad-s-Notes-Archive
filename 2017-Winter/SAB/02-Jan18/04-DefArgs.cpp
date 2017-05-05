#include <iostream>
using namespace std;
void bar(const char* str);
void bar(int len =75, char ch = '=');

int main() {
   bar(10, '-');
   bar(20);
   bar();
   bar("Now she trust me!!!!");
   return 0;
}
void bar(const char* str) {
   cout << str << endl;
}
void bar(int i, char c) {
   for (int j = 0; j < i; j++) {
      cout << c;
   }
   cout << endl;
}
