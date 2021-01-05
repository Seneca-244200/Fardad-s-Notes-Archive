#include <iostream>
using namespace std;
void line(char bodyCharOfTheLine = '-', int length = 50);

int main() {
   line('+', 20);
   line('@');
   line();
  //  line( , 100); syntax Error.
   return 0;
}

void line(char ch, int n) {
   int i;
   for (i = 0; i < n; i++) {
      cout << ch;
   }
   cout << endl;
}