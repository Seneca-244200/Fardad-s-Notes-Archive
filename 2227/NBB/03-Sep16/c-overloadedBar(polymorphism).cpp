#include <iostream>
using namespace std;
void bar(char fill, int length) { // bar_char_int
   int i;
   for (i = 0, cout << "|" << length; i < length; cout << fill, i++);
   cout << endl;
}
void bar(char fill) {   // bar_char
   bar(fill, 70);
}
void bar() {  // bar
   bar('=');
}
void bar(int length) {  // bar_int
   bar('=', length);
}
int main() {
   bar('-', 50);
   bar('+');
   bar();
   bar(25);
   return 0;
}