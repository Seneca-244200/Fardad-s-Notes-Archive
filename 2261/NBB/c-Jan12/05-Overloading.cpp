#include <iostream>
using namespace std;
void line(int length);
void line(char fill);
void line(int length, char fill);
void line();
int main() {
   cout << "OOP244 NBB Jan12th" << endl;
   line('+');
   line();
   line(40, '*');
   line(60);
   line('+');
   return 0;
}
void line(char fill) {
   line(79, fill);
}
void line() {
   line(79);
}
void line(int length) {
   line(length, '-');
}
void line(int l, char f) {
   for (int i = 0; i < l; i++) {
      cout << f;
   }
   cout << endl;
}