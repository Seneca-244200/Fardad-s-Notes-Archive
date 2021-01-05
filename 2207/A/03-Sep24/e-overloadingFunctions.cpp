#include <iostream>
using namespace std;
void line(char bodyCharOfTheLine, int length);
// C++ sees this: line_char_int
void line(char BodyChar);
// C++ sees this: line_char
void line();
// C++ sees this: line
void line(double Lenght);
// C++ sees this: line_double

int main() {
   line('+', 20);
   line('@');
   line();
   line(10.3);
   return 0;
}
void line(double length) {
   line('=', int(length));

}
void line() {
   line('-', 70);
}
void line(char bodyChar) {
   line(bodyChar, 50);
}
void line(char ch, int n) {
   int i;
   for (i = 0; i < n; i++) {
      cout << ch;
   }
   cout << endl;
}
