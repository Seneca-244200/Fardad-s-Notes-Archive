#include <iostream>
using namespace std;
void line(char fill='-', int len = 70);  // line_char_int

int main() {
   line('@', 50);
   cout << "line is done" << endl;
   line('+');
   cout << "line is done" << endl;
   line();
   cout << "line is done" << endl;
   return 0;
}

void line(char fill, int len) {
   for (int i = 0; i < len; i++, cout << fill);
   cout << endl;
}


