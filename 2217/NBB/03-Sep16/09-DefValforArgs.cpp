
#include <iostream>

using namespace std;

void line(int len = 70, char fill = '-');   // lineCharInt to eyes of C++


int main() {
   line(20, '*');
   line(30);
   line();
   return 0;
}

void line(int len, char fill) {
   for (int i = 0; i < len; i++, cout << fill);
   cout << endl;
}


