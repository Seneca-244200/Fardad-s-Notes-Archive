#include <iostream>
using namespace std;
void line(char fill);
void line(int length = 79, char fill = '-');
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

void line(int l, char f) {
   for (int i = 0; i < l; i++) {
      cout << f;
   }
   cout << endl;
}