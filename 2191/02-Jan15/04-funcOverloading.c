#include <iostream>
using namespace std;
void line(char body, int length);
//line_char_int
void line(char body);
void line();
//line_char
int main() {
   line();
   line('=', 20);
   line('+');
   return 0;
}
void line() {
   line('-');
}
void line(char ch) {
   line(ch, 70);
}
void line(char ch, int n) {
   int i;
   for (i = 0; i < n; i++) {
      cout << ch;
   }
   cout << endl;
}
