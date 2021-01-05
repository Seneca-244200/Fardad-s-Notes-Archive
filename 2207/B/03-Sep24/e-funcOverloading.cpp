#include <iostream>
using namespace std;
void line(char bodyCharOfTheLine, int length);
// C++ sees the line with this name:
//    line_char_int
void line(char bodyCharOfTheLine);
// C++ sees the line with this name:
//    line_char
void line();
// C++ sees the line with this name:
//    line
void line(double Lenght);
// C++ sees this: line_double

int main() {
   line('+', 20);
   line('@');
   line();
   line(23.45);
   return 0;
}
void line(double length) {
   line('=', int(length));
}
void line() {
   line('-', 60);
}
void line(char ch) {
   line(ch, 50);
}
void line(char ch, int n) {
   int i;
   for (i = 0; i < n; i++) {
      cout << ch;
   }
   cout << endl;
}