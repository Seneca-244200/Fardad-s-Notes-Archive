#include <iostream>
using namespace std;
void line(char body, int lenght);
void line(char body);
void line();
int main() {
   line('+', 30);
   line('#', 50);
   line('=');
   line();
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
