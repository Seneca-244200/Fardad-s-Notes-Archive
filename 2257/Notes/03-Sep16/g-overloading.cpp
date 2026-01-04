#include <iostream>
using namespace std;
void bar(char fill, int len) {
   for (int i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}
void bar(char fill) {
   bar(fill, 79);
}

void bar() {
   bar('-', 79);
}

void bar(int len) {
   bar('+', len);
}

int main() {
   bar('-', 30);
   bar('=');
   bar();
   bar(60);
   return 0;
}