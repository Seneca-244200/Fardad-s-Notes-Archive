#include <iostream>
using namespace std;
void bar(char fill ='-', int len = 79) {
   for (int i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}

void bar(int len) {
   bar('+', len);
}

int main() {
   // bar(, 50); you can not have incorrect syntax

   bar('-', 30);
   bar('=');
   bar();
   bar(60);
   return 0;
}