#include <iostream>
using namespace std;
//void line(char fill='=', int len=70); cannot have def val for fill, because I want len to be 75
void line(char fill, int len = 70);
void line();
void box(int width = 10, int height = 10);
int main() {
   line('*', 40);
   line('-');
   line();
   box(10, 20); // ok
   box(10); // ok
   //box(,30);// cannot do, since the def values can be skipped for right side only.
   return 0;
}

void line() {
   line('=', 75);
}
void line(char fill, int len) {
   int i;
   for (i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}