#include <iostream>
using namespace std;
void line(char body = '-', int length = 70);
//line_char_int

int main() {
   line();
   line('=', 20);
   line('+');
   return 0;
}

void line(char ch, int n) {
   int i;
   for (i = 0; i < n; i++) {
      cout << ch;
   }
   cout << endl;
}
