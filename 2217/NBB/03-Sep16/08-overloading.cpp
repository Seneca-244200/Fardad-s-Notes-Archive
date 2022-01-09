
#include <iostream>

using namespace std;

void line(char fill, int len);   // lineCharInt to eyes of C++
void line(int len);        // lineInt to yes of C++
void line();

int main() {
   line('*', 20);
   line(30);
   line();
   return 0;
}

void line(char fill, int len) {
   for (int i = 0; i < len; i++, cout << fill);
   cout << endl;
}

void line(int len) {
   line('-', len);
}

void line() {
   line(70);
}
