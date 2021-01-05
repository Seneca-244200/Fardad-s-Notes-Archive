#include <iostream>
using namespace std;
void line(char body = '-', int length = 70);
int main() {
   line('+', 30);
   line('=');
   line();
  // line(,46) syntax erro
   return 0;
}
void line(char ch, int n) {
   int i;
   for (i = 0; i < n; i++) {
      cout << ch;
   }
   cout << endl;
}
