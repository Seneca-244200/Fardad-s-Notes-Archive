#include <iostream>
using namespace std;
void bar(const char* title, int val, char fill) {
   int i;
   cout << title << endl;
   for (i = 0; i < val; i++) {
      cout << fill;
   }
   cout << endl;
}
void bar(const char* title, int val) {
   bar(title, val, '=');
}
void bar() {
   bar("", 70, '-');
}

int main() {
   char btitle[3][7] = { "IPC144", "OOP244", "OOP345" };
   char bfill[3] = { '=', '+', '+' };
   char bval[3] = { 70, 60, 50 };
   for (int i = 0; i < 3; i++) {
      bar(btitle[i], bval[i], bfill[i]);
   }
   bar();
   bar("New Bar", 60);
   return 0;
}
