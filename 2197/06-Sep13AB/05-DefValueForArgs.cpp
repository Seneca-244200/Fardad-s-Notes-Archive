#include <iostream>
using namespace std;
void bar(int len = 65, char fill = '-');

int main() {
   bar(30, '*');
   bar(45);
   bar();
   return 0;
}

void bar(int len, char fill) {
   for (int i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}
