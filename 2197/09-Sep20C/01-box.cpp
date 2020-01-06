#include <iostream>
using namespace std;

void box(int witdh, int height) {
   int i, j;
   cout << "*";
   for (i = 0; i < witdh -1; i++) {
      cout << " *";
   }
   cout << endl;
   for (j = 0; j < height - 2; j++) {
      cout << "* ";
      for (i = 0; i < witdh -2; i++, cout << "  ");
      cout << "*" << endl;
   }
   cout << "*";
   for (i = 0; i < witdh - 1; i++) {
      cout << " *";
   }
   cout << endl;
}

int main() {
   box(10, 5);
   box(5, 3);
   return 0;
}