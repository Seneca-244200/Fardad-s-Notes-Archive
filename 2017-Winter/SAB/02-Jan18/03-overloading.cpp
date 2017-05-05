#include <iostream>
using namespace std;
void bar(const char* str);
void bar(int len, char ch);
void bar(int len);
void bar();
int main() {
   bar(10, '-');
   bar(20);
   bar();
   bar("She does not trust me!!!!");
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
void bar(int i) {
   bar(i, '=');
}
void bar() {
   bar(75);
}