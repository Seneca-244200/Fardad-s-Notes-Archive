#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void bar(int len, char fill);
void bar(int len);
int main() {
   bar(10, '*');
   bar(20, '+');
   bar(30);
   return 0;
}
void bar(int len) {
   bar(len, '-');
}
void bar(int len, char fill) {
   cout << len << ": ";
   int i;
   for (i = 0; i < len; i++) cout << fill;
   cout << endl;
}