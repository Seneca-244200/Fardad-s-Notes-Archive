#include <iostream>
using namespace std;

void bar(int len =75, char fill = '-');
int main() {
   bar(35, '*');
   bar(50);
   bar();

   return 0;
}

void bar(int len, char fill) {
   for (int i = 0; i < len; i++) {
      cout << fill;
   }
   cout << endl;
}
