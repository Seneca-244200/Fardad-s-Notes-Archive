#include <iostream>
using namespace std;
void bar(const char* title, char fill, int val) {
   int i;
   cout << title << endl;
   for (i = 0; i < val; i++) {
      cout << fill;
   }
   cout << endl;
}

int main() {
   char btitle[3][7] = { "IPC144", "OOP244", "OOP345" };
   char bfill[3] = { '=', '+', '+' };
   char bval[3] = { 70, 60, 50 };
   for (int i = 0; i < 3; i++) {
      bar(btitle[i], bfill[i], bval[i]);
   }
   return 0;
}
