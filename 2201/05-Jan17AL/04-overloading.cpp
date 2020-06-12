#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void bar(int len, char fill);
void bar(int len);
void bar();
int main() {
   bar(20, '*');
   bar(30, '@');
   bar(40);
   bar();
   return 0;

}
void bar() {
   bar(60);
}
void bar(int len) {
   bar(len, '-');
}
void bar(int len, char fill) {
   cout << len << ": ";
   for (int i = 0; i < len; i++) cout << fill;
   cout << endl;
}